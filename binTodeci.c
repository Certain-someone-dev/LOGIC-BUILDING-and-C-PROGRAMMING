#include <stdio.h>
#include <math.h>
int main() {
    long long n;
    int dec = 0, i = 0, rem;
    printf("Enter binary number: ");
    scanf("%lld", &n);
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    printf("Decimal: %d", dec);
    return 0;
}