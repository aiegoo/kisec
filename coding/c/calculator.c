#include <stdio.h>
#include "arithmetic.h"

int main(void) {
    int num1, num2;
    char operator;

    printf("Enter an expression (e.g., 1 + 2): ");
    scanf("%d %c %d", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            printf("Result: %d\n", add(num1, num2));
            break;
        case '-':
            printf("Result: %d\n", subtract(num1, num2));
            break;
        case '*':
            printf("Result: %d\n", multiply(num1, num2));
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %.2f\n", divide(num1, num2));
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
            break;
    }

    return 0;
}