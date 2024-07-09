#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; // semicolon is important

void show(struct employee e); // function prototype


void show(struct employee e){
    printf("Code is %d\nSalary is %f\nName is %s\n", e.code, e.salary, e.name);
}

int main()
{
    struct employee e1;
    e1.code = 4511;
    strcpy(e1.name, "Harry");
    e1.salary = 54.44;
    show(e1);


    return 0;
}