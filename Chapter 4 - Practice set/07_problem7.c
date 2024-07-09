#include <stdio.h>

int main(){
    int sum=0;
    for (int i = 1; i <= 10; i++)
    {
        sum += (8*i);
    }
    printf("The sum of the table of 8 is %d", sum);
    return 0;
}