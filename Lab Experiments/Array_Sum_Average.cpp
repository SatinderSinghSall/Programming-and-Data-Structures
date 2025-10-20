// Array sum and average of 10 numeric values:

#include <stdio.h>

int main() {
	printf("\n Array Sum & Average: \n");
	const int maxNum = 10;
	int myNumber[maxNum];
	int length = sizeof(myNumber) / sizeof(myNumber[0]);
	int sum = 0;
	float average = 0;

	printf("\nEnter 10 array elements: ");
	for(int i = 0; i < length; i ++) {
		scanf("%d", &myNumber[i]);
	}

	printf("\nArray Elements:");
	for(int i = 0; i < length; i ++) {
		printf("%d ", myNumber[i]);
	}

	for(int i = 0; i < length; i ++) {
		sum = sum + myNumber[i];
	}

	average = (float) sum / length;

	printf("\n\nSum of array elements: %d", sum);
	printf("\nAverage of array element: %f", average);

    return 0;
}

