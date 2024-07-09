#include <stdio.h>
#include <stdlib.h>

int main(){
    float n = 5;
    float* ptr; 
    ptr = (float*) malloc(n * sizeof(float)); 
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit program if memory allocation fails
    }

    ptr[0] = 3.345;
    ptr[1] = 16.345; 
    ptr[2] = 6.345; 
    ptr[3] = 56.345; 
    ptr[4] = 66.345; 

    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]); 

    free(ptr); // Free allocated memory

    return 0;
}