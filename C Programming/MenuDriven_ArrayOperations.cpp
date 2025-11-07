// C Program: Array Operations

#include <stdio.h>

int main() {
    int number[100], size, pos, value, i, j, choice, found = 0;

    printf("\n===== Array Operations Data Structure =====\n");

    // Step 1: Take array size
    printf("\nEnter the array size: ");
    scanf("%d", &size);

    // Step 2: Input array elements
    printf("Enter %d values: ", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &number[i]);
    }

    // Menu-driven approach for array operations
    do {
        printf("\n===== MENU =====");
        printf("\n1. Traversal");
        printf("\n2. Insertion");
        printf("\n3. Deletion");
        printf("\n4. Searching");
        printf("\n5. Sorting");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            // Traversal
            case 1:
                printf("\nArray elements are:\n");
                for (i = 0; i < size; i++) {
                    printf("Index %d ? %d\n", i, number[i]);
                }
                break;

            // Insertion
            case 2:
                printf("\nEnter position to insert (0 - %d): ", size);
                scanf("%d", &pos);
                printf("Enter value to insert: ");
                scanf("%d", &value);

                if (pos < 0 || pos > size) {
                    printf("Invalid position!\n");
                } else {
                    for (i = size; i > pos; i--) {
                        number[i] = number[i - 1];
                    }
                    number[pos] = value;
                    size++;
                    printf("Value inserted successfully!\n");
                }
                break;

            // Deletion
            case 3:
                printf("\nEnter position to delete (0 - %d): ", size - 1);
                scanf("%d", &pos);

                if (pos < 0 || pos >= size) {
                    printf("Invalid position!\n");
                } else {
                    value = number[pos];
                    for (i = pos; i < size - 1; i++) {
                        number[i] = number[i + 1];
                    }
                    size--;
                    printf("Value %d deleted successfully!\n", value);
                }
                break;

            // Searching
            case 4:
                printf("\nEnter value to search: ");
                scanf("%d", &value);
                found = 0;

                for (i = 0; i < size; i++) {
                    if (number[i] == value) {
                        printf("Value %d found at index %d.\n", value, i);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Value not found in the array.\n");
                }
                break;

            // Sorting
            case 5:
                for (i = 0; i < size - 1; i++) {
                    for (j = i + 1; j < size; j++) {
                        if (number[i] > number[j]) {
                            int temp = number[i];
                            number[i] = number[j];
                            number[j] = temp;
                        }
                    }
                }
                printf("\nArray sorted in ascending order!\n");
                break;

            // Exit
            case 6:
                printf("\nExiting program...\n");
                break;

            default:
                printf("\nInvalid choice! Try again.\n");
        }

    } while (choice != 6);

    return 0;
}

