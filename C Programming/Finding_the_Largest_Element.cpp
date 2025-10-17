// Example: Finding the Largest Element

#include <stdio.h>

int LargestArrayElement(int number[], int length) {
	int max = number[0];

	for(int i = 0; i < length; i ++) {
		if(number[i] > max) {
			max = number[i];
		}
	}

	return max;
}

int main() {
	printf("\nExample: Finding the Largest Element:\n");
	int number[] = {2, 4, 6, 8, 10};
	int length = sizeof(number) / sizeof(number[0]);

	int max = LargestArrayElement(number, length);

	printf("\nLargest number in the Array is: %d", max);

	return 0;
}

