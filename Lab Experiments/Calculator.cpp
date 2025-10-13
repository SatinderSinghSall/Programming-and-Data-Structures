// Simple Calculator:

#include <stdio.h>

int main() {
    int num1, num2;
    int add, sub, mul;
    float div;

	printf("\n ===== Simple Calculator: =====\n");

    printf("\nEnter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;

    printf("Addition: %d\n", add);
    printf("Subtraction: %d\n", sub);
    printf("Multiplication: %d\n", mul);

    if (num2 != 0) {
        div = (float)num1 / num2;
        printf("Division: %.2f\n", div);
    } else {
        printf("Division: Not possible (division by zero)\n");
    }

    return 0;
}

