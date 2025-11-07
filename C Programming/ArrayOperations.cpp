// Array Operations Data Structure:

#include <stdio.h>

int main() {
	printf("\n===== Array Operations Data Structure: =====\n");

	int size;
	int number[size];

	printf("\nEnter the array size: ");
	scanf("%d", &size);

	printf("\nEnter the array size %d values: ", size);
	for(int i = 0; i < size; i ++) {
		scanf("%d", &number[i]);
	}

	printf("\nArray values are:\n");
	for(int i = 0; i < size; i ++) {
		printf("Index %d value %d\n", i, number[i]);
	}

	return 0;
}

