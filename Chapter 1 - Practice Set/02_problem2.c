#include <stdio.h>

int main(){
    int r = 6;
    int height = 10;
    printf("The area of circle with radius %d is %f\n", r, 3.14*r*r);
    printf("The volume of cylinder with radius %d and height %d is %f", r, height,  3.14*r*r*height);
    return 0;
}