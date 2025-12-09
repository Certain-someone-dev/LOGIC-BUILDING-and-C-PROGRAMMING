#include <stdio.h>

int main() {
    int units;
    float bill;
    printf("Enter units: ");
    scanf("%d", &units);
    
    if (units <= 50) {
        bill = units * 0.50;
    } else if (units <= 150) {
        bill = 25 + (units - 50) * 0.75;
    } else {
        bill = 100 + (units - 150) * 1.20;
    }
    
    printf("Total Bill: $%.2f\n", bill);
    return 0;
}