#include <stdio.h>

int main() {
    double num1, num2, sum;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    sum = num1 + num2;

    printf("The sum of %.2lf and %.2lf is: %.2lf\n", num1, num2, sum);

    return 0;
}
