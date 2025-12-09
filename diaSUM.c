#include <stdio.h>
int main() {
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, sum = 0, i;
    for (i = 0; i < 3; i++) {
        sum += a[i][i];
    }
    printf("Diagonal Sum: %d", sum);
    return 0;
}