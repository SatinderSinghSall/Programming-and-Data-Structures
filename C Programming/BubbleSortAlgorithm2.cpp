// Bubble Sort Algorithm:

#include <stdio.h>

void PrintArray(int arr[], int length) {
	for(int i = 0; i < length; i ++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void BubbleSort_Algo(int arr[], int length) {
	for(int i = 0; i < length - 1; i ++) {
		for(int j = 0; j < length - 1 - i; j ++) {
			if(arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	printf("Bubble Sort Algorithm:\n");

	int arr[] = {15, 16, 6, 8, 5};
	int length = sizeof(arr) / sizeof(arr[0]);

	printf("\nArray before Sorting: ");
	PrintArray(arr, length);

	BubbleSort_Algo(arr, length);

	printf("\nArray after Sorting: ");
	PrintArray(arr, length);
}

