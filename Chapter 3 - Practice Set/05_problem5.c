// https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

#include <stdio.h>

int main(){
    char ch = 'A';
    printf("The character is %c\n", ch);
    printf("The value of character is %d\n", ch);
    // 97, 122
    if(ch >= 97 && ch<=122){
        printf("This character is lowercase\n");
    }
    else{
         printf("This character not lowecase \n");
    }
    return 0;
}