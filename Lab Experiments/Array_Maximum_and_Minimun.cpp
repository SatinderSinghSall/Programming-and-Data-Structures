// Find maximum and minimum value in an array:

#include <stdio.h>

int main() {
    printf("\nArray maximum and minimum value:\n");

    int elementNum;
    printf("\nEnter number of array values: ");
    scanf("%d", &elementNum);

    int myNumber[elementNum];

    printf("\nEnter %d array elements: ", elementNum);
    for(int i = 0; i < elementNum; i++) {
        scanf("%d", &myNumber[i]);		
    }

    printf("\nArray Elements:");
    for(int i = 0; i < elementNum; i++) {
        printf(" %d", myNumber[i]);
    }

    int maxNum = myNumber[0];
    int minNum = myNumber[0];

    for(int i = 1; i < elementNum; i++) {
        if(myNumber[i] > maxNum) {
            maxNum = myNumber[i];
        }
        if(myNumber[i] < minNum) {
            minNum = myNumber[i];
        }
    }

    printf("\nMaximum Number: %d", maxNum);
    printf("\nMinimum Number: %d\n", minNum);

    return 0;
}

