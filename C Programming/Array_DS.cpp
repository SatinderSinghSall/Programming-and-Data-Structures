// Array Data Structure:

// Arrays in Data Structure | Declaration, Initialization, Memory representation.

#include <stdio.h>

int main() {
	printf("\n===== Array Data Structure: =====\n");

	int number[5];

	printf("\nEnter array values of size 5 : ");
	for(int i = 0; i < 5; i ++) {
		scanf("%d", &number[i]);
	}

	printf("\nArray values are:\n");
	for(int j = 0; j < 5; j ++) {
		printf("Index %d value is %d\n", j, number[j]);
	}

	return 0;
}

