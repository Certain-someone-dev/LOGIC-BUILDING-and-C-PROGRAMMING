#include <stdio.h>
int main() {
    int r = 2, c = 2, a[2][2] = {{1, 2}, {3, 4}}, b[2][2] = {{1, 1}, {1, 1}}, sum[2][2], i, j;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
            
    printf("Sum:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}