#include <stdio.h>

int main(){
    char str[6];
    // scanf("%s", str);
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &str[i]); 
        fflush(stdin);
    }
    str[5] = '\0';
    
    printf("%s", str);
    return 0;
}