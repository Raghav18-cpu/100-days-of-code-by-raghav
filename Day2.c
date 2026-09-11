#include <stdio.h>

int main() {
    float num1, num2;
    float sum, diff, product, quotient;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    // Calculations
    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;

    // Display sum, difference, product
    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", diff);
    printf("Product = %.2f\n", product);

    // Check for division by zero before computing quotient
    if (num2 != 0) {
        quotient = num1 / num2;
        printf("Quotient = %.2f\n", quotient);
    } else {
        printf("Quotient = Undefined (division by zero)\n");
    }

    return 0;
}