#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("harry.txt", "a");
    // char c = fgetc(ptr); // used to read a character from file
    // printf("%c", c);
    fputc('c', ptr);

    fclose(ptr); // Close the file to prevent resource leak
    
    return 0;
}