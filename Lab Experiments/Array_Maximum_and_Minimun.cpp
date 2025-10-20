// Find maximum and minimum value in an array:

#include <stdio.h>

int main() {
	printf("\nArray maximun and minimum value: \n");

	int elementNum;
	int myNumber[elementNum];

	printf("\nEnter number of array values: ");
	scanf("%d", &elementNum);

	printf("\nEnter %d array elements: ", elementNum);
	for(int i = 0; i < elementNum; i ++) {
		scanf("%d", &myNumber[i]);		
	}

	printf("\nArray Elements:");
	for(int i = 0; i < elementNum; i ++) {
		printf(" %d", myNumber[i]);
	}

    return 0;
}

