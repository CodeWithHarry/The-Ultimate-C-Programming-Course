#include <stdio.h>

int main(){
    int i = 2;
    int* ptr1 = &i;
    int** ptr2 = &ptr1;
    printf("The address of i is %u\n", &i);
    printf("The value of i is %d\n", *ptr1);
    printf("The value of i is %d\n", **ptr2);
    return 0;
}