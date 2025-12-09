#include <stdio.h>

int main() {
    char op;
    double a, b;
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &a, &b);

    switch(op) {
        case '+': printf("%.2lf", a + b); break;
        case '-': printf("%.2lf", a - b); break;
        case '*': printf("%.2lf", a * b); break;
        case '/': 
            if (b != 0) { printf("%.2lf", a / b); }
            else { printf("Div by Zero"); }
            break;
        default: printf("Invalid operator");
    }
    return 0;
}

