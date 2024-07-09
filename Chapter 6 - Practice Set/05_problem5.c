#include <stdio.h>
#include <stdlib.h> // for malloc and free

int* sum(int a, int b){
    int* ptr = (int*)malloc(sizeof(int)); // Allocate memory for an int
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        exit(1); // Exit program if memory allocation fails
    }
    *ptr = a + b;
    printf("The sum is %d\n", *ptr);
    return ptr;
}

float* average(int a, int b){
    float* ptr = (float*)malloc(sizeof(float)); // Allocate memory for a float
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        exit(1); // Exit program if memory allocation fails
    }
    *ptr = (a + b) / 2.0;
    printf("The average is %f\n", *ptr);
    return ptr;
}

int main(){
    int x = 4; 
    int y = 6;
    int* ptr1;
    float* ptr2;

    ptr1 = sum(x, y);
    ptr2 = average(x, y);

    printf("The address of sum is %p and of average is %p\n", (void*)ptr1, (void*)ptr2);

    // Free allocated memory
    free(ptr1);
    free(ptr2);

    return 0;
}
