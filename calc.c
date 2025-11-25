#include <stdio.h>

// Function for addition
double add(double a, double b) {
    return a + b;
}

// Function for subtraction
double sub(double a, double b) {
    return a - b;
}

// Function for multiplication
double mul(double a, double b) {
    return a * b;
}

// Function for division (with zero check)
double div(double a, double b) {
    if (b == 0) {
        printf("Math Error: Division by zero\n");
        return 0;  // Return 0 on error, but ideally handle better
    }
    return a / b;
}

int main() {
    double num1, num2, result;
    char op;

    printf("Simple Calculator\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);  // Note the space before %c to consume newline

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (op) {
        case '+':
            result = add(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = sub(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = mul(num1, num2);
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            result = div(num1, num2);
            if (num2 != 0) {
                printf("Result: %.2lf\n", result);
            }
            break;
        default:
            printf("Invalid operator\n");
    }