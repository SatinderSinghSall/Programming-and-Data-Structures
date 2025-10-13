// Insertion Sort Algorithm:

#include <stdio.h>

void PrintArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void InsertionSort_Algo(int arr[], int length) {
    for (int i = 1; i < length; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main() {
    printf("Insertion Sort Algorithm:\n");

    int arr[] = {4, 5, 10, 1, 6, 2};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("\nArray before Sorting: ");
    PrintArray(arr, length);

    InsertionSort_Algo(arr, length);

    printf("\nArray after Sorting: ");
    PrintArray(arr, length);

    return 0;
}

