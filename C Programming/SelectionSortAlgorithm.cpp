// Selection Sort Algorithm:

#include <stdio.h>

void PrintArray(int arr[], int length) {
	for(int i = 0; i < length; i ++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void SelectionSort_Algo(int arr[], int length) {
	for(int i = 0; i < length - 1; i ++) {
		int minPos = i;
		for(int j = i + 1; j < length; j ++) {
			if(arr[j] < arr[minPos]) {
				minPos = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[minPos];
		arr[minPos] = temp;
	}
}

int main() {
	printf("Selection Sort Algorithm:\n");

	int arr[] = {7, 4, 10, 8, 3, 1};
	int length = sizeof(arr) / sizeof(arr[0]);

	printf("\nArray before Sorting:");
	PrintArray(arr, length);

	SelectionSort_Algo(arr, length);

	printf("\nArray After Sorting:");
	PrintArray(arr, length);
}

