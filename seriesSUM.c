#include <stdio.h>
int main() {
    int n, i;
    double sum = 0.0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    printf("Sum: %.2lf", sum);
    return 0;
}