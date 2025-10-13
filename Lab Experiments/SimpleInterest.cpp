// Simple Interest:

#include<stdio.h>

int main() {
	float principal, rate, time;
	float simple_interest, payback;

	printf("\n===== Simple Interest Calculator: =====\n");

	printf("\nEnter the Principal: ");
	scanf("%f", &principal);

	printf("Enter the Rate: ");
	scanf("%f", &rate);

	printf("Enter the Time (In Years): ");
	scanf("%f", &time);

	simple_interest = (principal * rate * time) / 100;
	payback = principal + simple_interest;

	printf("\nSimple Interest: %f", simple_interest);
	printf("\nPayback Amount: %f", payback);

	return 0;
}

