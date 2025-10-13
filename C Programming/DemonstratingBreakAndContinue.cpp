// C Break and Continue:

#include <stdio.h>

int main() {
    printf("\n===== Break and Continue in C =====\n\n");

    // 1?? BREAK STATEMENT EXAMPLE
    printf("1?? BREAK Example:\n");
    printf("Printing numbers from 1 to 10, but stop when number = 5\n");

    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Encountered 5, breaking out of the loop!\n");
            break; // exits the loop completely
        }
        printf("%d ", i);
    }
    printf("\n\n");

    // 2?? CONTINUE STATEMENT EXAMPLE
    printf("2?? CONTINUE Example:\n");
    printf("Printing numbers from 1 to 10, skipping number = 5\n");

    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("(Skipping 5) ");
            continue; // skips the rest of the loop body for this iteration
        }
        printf("%d ", i);
    }
    printf("\n\n");

    // 3?? BREAK in WHILE LOOP
    printf("3?? BREAK in while loop:\n");
    int j = 1;
    while (j <= 10) {
        if (j == 7) {
            printf("\nNumber 7 found, breaking out of the while loop!\n");
            break;
        }
        printf("%d ", j);
        j++;
    }
    printf("\n\n");

    // 4?? CONTINUE in DO-WHILE LOOP
    printf("4?? CONTINUE in do-while loop:\n");
    int k = 0;
    do {
        k++;
        if (k == 3) {
            printf("(Skipping 3) ");
            continue;  // skips printing 3
        }
        printf("%d ", k);
    } while (k < 5);

    printf("\n\n");

    // 5?? BONUS: BREAK in NESTED LOOPS
    printf("5?? BREAK in nested loops (breaking outer loop):\n");
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 3; col++) {
            if (col == 2) {
                printf("\nBreaking inner loop when col = 2\n");
                break;  // breaks only inner loop
            }
            printf("Row %d, Col %d\n", row, col);
        }
    }

    return 0;
}

