// Queue Data Structure:

#include <stdio.h>
#define MAX_SIZE 5

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

// ENQUEUE Operation (Insert)
void ENQUEUE(int item) {
    if(rear == MAX_SIZE - 1) {
        printf("\nQueue Overflow!\n");
    } else {
        if(front == -1) front = 0;   // First element
        queue[++rear] = item;
        printf("\nItem %d Inserted Successfully.\n", item);
    }
}

// DEQUEUE Operation (Delete)
void DEQUEUE() {
    if(front == -1 || front > rear) {
        printf("\nQueue Underflow!\n");
    } else {
        int item = queue[front++];
        printf("\nItem %d Deleted Successfully.\n", item);
    }
}

// DISPLAY Operation
void DISPLAY() {
    if(front == -1 || front > rear) {
        printf("\nQueue is Empty.\n");
    } else {
        printf("\nQueue Elements: ");
        for(int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main() {
    printf("\n=== Queue Data Structure (Using Array) ===\n");

    int choice, item;

    printf("\nOperations:\n");
    printf("1. ENQUEUE()\n");
    printf("2. DEQUEUE()\n");
    printf("3. DISPLAY()\n");
    printf("4. EXIT\n");

    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nEnter value to insert: ");
                scanf("%d", &item);
                ENQUEUE(item);
                break;

            case 2:
                DEQUEUE();
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


