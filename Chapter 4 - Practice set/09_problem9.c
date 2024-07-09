#include <stdio.h>

int main(){
    // 8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8
    // 5! = 1 X 2 X 3 X 4 X 5
    // n! = 1 X 2 X 3 X 4 X 5 ..... X n
    // 0! = 1
    int i = 1;
    int product=1;
    int n = 5;
    while(i<=n)
    {
        product *=i;
        i++;
    }
    printf("The factorial of %d is %d", n, product);
    return 0;
}