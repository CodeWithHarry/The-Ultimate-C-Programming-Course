#include <stdio.h>
typedef struct emp{
    int salary;
    float score;
} Employee;

int main(){
    Employee e1;
    Employee* ptr = &e1;
    (*ptr).salary = 56;
    (*ptr).score = 45.3;

    // ptr->salary = 56;
    // ptr->score = 45.3;

    printf("The value of salary is %d and the value of score is %.2f \n", ptr->salary, ptr->score);
    
    return 0;
}