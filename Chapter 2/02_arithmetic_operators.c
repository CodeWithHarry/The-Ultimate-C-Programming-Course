#include <stdio.h>

int main(){
    int a = 5;
    int b = 3;
    int c = a + b;
    printf("The value of a is %d and value of b is %d and sum is %d\n", a, b, c);
    // Modulus operator is used to get the remainder
    printf("The remainder when a is divided by b is: %d\n", a%b);

    // This does not work for exponentiation in c
    // int d = a^b;

    return 0;
}