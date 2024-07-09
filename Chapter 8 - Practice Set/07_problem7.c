#include <stdio.h>
#include <string.h>

int main(){
    char str[] = "Nfsb!tbbsb!qbjtb!ubljzf!lf!offdif!cmbdl!qpmz!nf!ibj";
    for (int i = 0; i < strlen(str); i++)
    {
       str[i] = str[i] - 1;
    }

    printf("%s", str);
    
    return 0;
}