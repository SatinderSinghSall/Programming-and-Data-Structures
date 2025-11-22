// Stack Data Structure:

#include <stdio.h>
#define MAX_SIZE 5

int stack[MAX_SIZE];
int top = -1;

// PUSH() Operation:
void PUSH(int item) {
    if(top == MAX_SIZE - 1) {
        printf("Stack Overflow!\n");
    } else {
        stack[++top] = item;
        printf("Item %d Inserted Successfully.\n", item);
    }
}

// POP() Operation:
void POP() {
    if(top == -1) {
        printf("Stack Underflow!\n");
    } else {
        int item = stack[top--];  // FIXED HERE
        printf("Item %d Deleted Successfully.\n", item);
    }
}

// DISPLAY() Operation:
void DISPLAY() {
    if(top == -1) {
        printf("Stack is Empty.\n");
    } else {
        printf("Stack Elements: ");
        for(int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    printf("\n=== Stack Data Structure ===\n");

    int choice, item;

    printf("\nOperations to Select:\n");
    printf("1. Push Operation: PUSH()\n");
    printf("2. Pop Operation: POP()\n");
    printf("3. Display all the Stack Elements: DISPLAY()\n");
    printf("4. EXIT Program\n");

    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nEnter value to push: ");
                scanf("%d", &item);
                PUSH(item);
                break;

            case 2:
                POP();
                break;

            case 3:
                DISPLAY();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice! Try Again.\n");
        }
    }

    return 0;
}

