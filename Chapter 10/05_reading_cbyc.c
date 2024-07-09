#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("harry.txt", "r");
    while (1)
    {
        ch = fgetc(ptr); 
        printf("%c", ch);
        // when all the content of a file has been read break
        if (ch == EOF)
        {
            break;
        }
    }
        return 0;
}