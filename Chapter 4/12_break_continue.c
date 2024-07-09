#include <stdio.h>

int main(){
    for (int i = 0; i < 15; i++)
    {
        if(i==5){
            // break; // exit the loop now!
            continue; // skip this iteration now
        }
        printf("i is %d\n", i);
    }

    printf("For loop is done!");
    
    return 0;
}