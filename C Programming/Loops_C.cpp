// Loops in C:

#include <stdio.h>

int main() {
    printf("\n===== Loops in C =====\n\n");

    // 1?? FOR LOOP
    printf("1?? FOR LOOP EXAMPLE:\n");
    printf("Printing numbers from 1 to 5 using a for loop:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // 2?? WHILE LOOP
    printf("2?? WHILE LOOP EXAMPLE:\n");
    printf("Printing numbers from 1 to 5 using a while loop:\n");
    int j = 1;
    while (j <= 5) {
        printf("%d ", j);
        j++;
    }
    printf("\n\n");

    // 3?? DO-WHILE LOOP
    printf("3?? DO-WHILE LOOP EXAMPLE:\n");
    printf("Printing numbers from 1 to 5 using a do-while loop:\n");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 5);
    printf("\n\n");

    // ?? BONUS: Infinite Loop Example (commented out for safety)
    /*
    printf("Infinite loop example (press Ctrl+C to stop):\n");
    while (1) {
        printf("This will run forever!\n");
    }
    */

    // ?? BONUS: Nested Loop Example
    printf("4?? NESTED LOOP EXAMPLE:\n");
    printf("Printing a 3x3 matrix using nested for loops:\n");
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 3; col++) {
            printf("%d ", col);
        }
        printf("\n");
    }

    return 0;
}

