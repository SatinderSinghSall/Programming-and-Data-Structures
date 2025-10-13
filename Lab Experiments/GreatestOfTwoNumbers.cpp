// Greatest of Two Numbers:

#include<stdio.h>

int main() {
	float num1, num2;
	float largest;

	printf("\n===== Greatest of Two Numbers: =====\n");

	printf("\nEnter the first number: ");
	scanf("%f", &num1);

	printf("Enter the second number: ");
	scanf("%f", &num2);

	if(num1 > num2) {
		largest = num1;
	} else {
		largest = num2;
	}

	printf("\nThe largest of %f and %f is %f", num1, num2, largest);

	return 0;
}

