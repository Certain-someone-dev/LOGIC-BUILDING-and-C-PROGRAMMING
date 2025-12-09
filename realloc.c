#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr, i, n1, n2;
    n1 = 2; 
    ptr = (int*) malloc(n1 * sizeof(int));
    for (i = 0; i < n1; ++i) {
        ptr[i] = i + 1;
    }
    
    n2 = 4;
    ptr = realloc(ptr, n2 * sizeof(int));
    for (i = n1; i < n2; ++i) {
        ptr[i] = i + 1;
    }
    
    for (i = 0; i < n2; ++i) {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}