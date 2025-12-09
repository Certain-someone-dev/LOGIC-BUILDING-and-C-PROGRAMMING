#include <stdio.h>
int power(int base, int a) {
    if (a != 0) {
        return (base * power(base, a - 1));
    } else {
        return 1;
    }
}
int main() {
    int base = 2, a = 3;
    printf("%d^%d = %d", base, a, power(base, a));
    return 0;
}
