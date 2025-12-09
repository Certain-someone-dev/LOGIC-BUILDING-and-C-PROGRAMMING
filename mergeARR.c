#include <stdio.h>
int main() {
    int a[] = {1, 2}, b[] = {3, 4}, c[4], i;
    for (i = 0; i < 2; i++) {
        c[i] = a[i];
    }
    for (i = 0; i < 2; i++) {
        c[i + 2] = b[i];
    }
    for (i = 0; i < 4; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}
