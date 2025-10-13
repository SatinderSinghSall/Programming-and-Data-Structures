// Bubble Sort Algorithm:

#include <stdio.h>

void printArray(int A[], int n) {
	for(int i = 0; i < n; i ++) {
		printf("%d ", A[i]);
	}
	printf("\n");
}

// Basic Approch:
void BubbleSort_Algo(int A[], int n) {
	for(int i = 0; i < n - 1; i ++) {
		for(int j = 0; j < n - 1; j ++) {
			if(A[j] > A[j + 1]) {
				int temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}
}

// Optimized Approch - 1:
void BubbleSort_Algo_Opt1(int A[], int n) {
	for(int i = 0; i < n - 1; i ++) {
		for(int j = 0; j < n - 1 - i; j ++) {
			if(A[j] > A[j + 1]) {
				int temp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = temp;
			}
		}
	}
}

int main() {
	printf("Bubble Sort Algorithm:\n");

	int A[] = {15, 16, 6, 8, 5};
	int n = sizeof(A) / sizeof(A[0]);

	printf("\nArray Before Sorting: ");
	printArray(A, n);

//	BubbleSort_Algo(A, n);
	BubbleSort_Algo_Opt1(A, n);

	printf("Array After Sorting: ");
	printArray(A, n);
}

