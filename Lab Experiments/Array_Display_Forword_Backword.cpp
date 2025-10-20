// Array: forward and backward:

#include <stdio.h>

int main() {
	printf("\n Array: forward and backward: \n");

	int maxNum = 10;
	int myNumber[maxNum];
	int length = sizeof(myNumber) / sizeof(myNumber[0]);

	printf("\nEnter 10 array Elements: ");
	for(int i = 0; i < length; i ++) {
		scanf("%d", &myNumber[i]);
	}

	printf("\nArray Element Forword:");
	for(int i = 0; i < length; i ++) {
		printf("%d ", myNumber[i]);
	}

	printf("\nArray Element Backword:");
	for(int i = length - 1; i >= 0; i --) {
		printf("%d ", myNumber[i]);
	}

    return 0;
}

