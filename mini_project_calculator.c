#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("==================================\n");
    printf("        SIMPLE CALCULATOR         \n");
    printf("==================================\n");
    printf("Choose an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Space before %c handles any stray newline characters

    printf("Enter first operand: ");
    scanf("%lf", &num1);
    printf("Enter second operand: ");
    scanf("%lf", &num2);

    printf("\nResult: ");
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0.0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is undefined.\n");
            }
            break;
        default:
            printf("Error! Invalid operator selected.\n");
    }
    printf("==================================\n");

    return 0;
}
