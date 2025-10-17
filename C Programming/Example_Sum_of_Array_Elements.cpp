// Example: Sum of Array Elements

#include <stdio.h>

int main() {
	printf("\nExample: Sum of Array Elements:\n");

	int number[] = {2, 4, 6, 8, 10};
	int sum = 0;
	int length = sizeof(number) / sizeof(number[0]);

	for(int i = 0; i < length; i ++) {
		sum = sum + number[i];
	}

	printf("\nSum: %d", sum);

	return 0;
}

