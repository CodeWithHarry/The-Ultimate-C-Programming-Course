// Write a program using function to print the following pattern (first n lines)
#include <stdio.h>

void star(int);
void star(int a)
{
    
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < ((2 * i) + 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }
}
// This loop runs from 0 to 2
        // if i = 0 ---> print 1 star 
        // if i = 1 ---> print 3 stars 
        // if i = 2 ---> print 5 stars 
        // no_of_stars = (2*i+1)

        // This for loop prints (2*i+1) stars
int main()
{
    star(20);
    return 0;
}
