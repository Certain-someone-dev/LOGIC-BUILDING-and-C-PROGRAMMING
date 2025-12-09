#include <stdio.h>
void swap(int *n1, int *n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main() {
    int a = 5, b = 10;
    swap(&a, &b);
    printf("a: %d, b: %d", a, b);
    return 0;
}

