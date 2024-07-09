#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    int* ptr; 
    ptr = (int*) malloc(n * sizeof(int)); 
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit program if memory allocation fails
    }
    
    ptr[0] = 3;  
    printf("%d\n", ptr[0]);

    int* temp = (int*) realloc(ptr, 10 * sizeof(int)); 
    if (temp == NULL) {
        printf("Memory reallocation failed\n");
        free(ptr); // Free original memory block on failure
        return 1; // Exit program if memory reallocation fails
    }
    
    ptr = temp; // Assign realloc'd pointer back to ptr
    printf("%d\n", ptr[0]);
    
    // Don't forget to free allocated memory when done using it
    free(ptr);

    return 0;
}