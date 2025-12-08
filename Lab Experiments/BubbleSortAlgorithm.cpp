// Bubble Sort Algorithm:

#include <stdio.h>

void PrintArray(int arr[], int length) {
	for(int i = 0; i < length; i ++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void BubbleSortAlgorithm(int arr[], int length) {
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
	printf("\n===== Bubble Sort Algorithm: =====\n");

	int arr[] = {22, 43, 11, 34, 12, 65, 23};
	int length = sizeof(arr) / sizeof(arr[1]);

	printf("\nArray before Sort: ");
	PrintArray(arr, length);

	BubbleSortAlgorithm(arr, length);

	printf("\nArray after Sort: ");
	PrintArray(arr, length);

	return 0;
}

