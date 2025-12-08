// Bubble Sort Algorithm:

#include <stdio.h>

void PrintArray(int arr[], int length) {
	for(int i = 0; i < length; i ++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void BubbleSort_Algorithm(int arr[], int length) {
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
	int size;

	printf("Enter array size: ");
	scanf("%d", &size);
	
	int arr[size];
	int length = sizeof(arr) / sizeof(arr[1]);
	printf("Enter %d size array elements: ", size);
	for(int i = 0; i < length; i ++) {
		scanf("%d", &arr[i]);
	}

	PrintArray(arr, length);
	BubbleSort_Algorithm(arr, length);
	PrintArray(arr, length);

	return 0;
}

