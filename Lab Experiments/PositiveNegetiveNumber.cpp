// Program to find the given number is Positive, Negetive or Zero:

#include <stdio.h>

int main() {
	int number;
	char *status;

	printf("\n===== Lab Experiment: =====\n");

	printf("\nEnter a number: ");
	scanf("%d", &number);

	if(number > 0) {
		status = "POSITIVE";
	} else if(number < 0) {
		status = "NEGATIVE";
	} else {
		status = "ZERO";
	}

	printf("The number %d status is %s", number, status);

	return 0;
}

