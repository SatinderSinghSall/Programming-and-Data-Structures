// Linked List: Circular Linked List Data Structure

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* last = NULL;   // Points to LAST node (tail)

// Insert at Beginning
void INSERT_BEGIN(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if(last == NULL) {  // First node
        last = newNode;
        newNode->next = newNode;
    } else {
        newNode->next = last->next;
        last->next = newNode;
    }

    printf("\nItem %d Inserted at Beginning.\n", value);
}

// Insert at End
void INSERT_END(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    if(last == NULL) {
        last = newNode;
        newNode->next = newNode;
    } else {
        newNode->next = last->next; // First node
        last->next = newNode;
        last = newNode;             // Update last
    }

    printf("\nItem %d Inserted at End.\n", value);
}

// Delete from Beginning
void DELETE_BEGIN() {
    if(last == NULL) {
        printf("\nList is Empty!\n");
        return;
    }

    struct Node* temp = last->next;

    // Only one node
    if(last == temp) {
        printf("\nItem %d Deleted.\n", temp->data);
        free(temp);
        last = NULL;
        return;
    }

    last->next = temp->next;
    printf("\nItem %d Deleted from Beginning.\n", temp->data);
    free(temp);
}

// Delete from End
void DELETE_END() {
    if(last == NULL) {
        printf("\nList is Empty!\n");
        return;
    }

    struct Node* temp = last->next;
    struct Node* prev = NULL;

    // Only one node
    if(temp == last) {
        printf("\nItem %d Deleted.\n", temp->data);
        free(temp);
        last = NULL;
        return;
    }

    // Traverse to find node before last
    while(temp->next != last->next) {
        prev = temp;
        temp = temp->next;
    }

    printf("\nItem %d Deleted from End.\n", temp->data);
    prev->next = last->next;
    free(temp);
    last = prev;  // Update last pointer
}

// Display Circular List
void DISPLAY() {
    if(last == NULL) {
        printf("\nList is Empty.\n");
        return;
    }

    struct Node* temp = last->next;
    printf("\nCircular Linked List: ");

    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while(temp != last->next);

    printf("(back to start)\n");
}

int main() {
    int choice, value;

    printf("\n=== Circular Singly Linked List Implementation ===\n");

    printf("\nOperations:\n");
    printf("1. Insert at Beginning\n");
    printf("2. Insert at End\n");
    printf("3. Delete from Beginning\n");
    printf("4. Delete from End\n");
    printf("5. Display List\n");
    printf("6. Exit\n");

    while(1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                INSERT_BEGIN(value);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                INSERT_END(value);
                break;

            case 3:
                DELETE_BEGIN();
                break;

            case 4:
                DELETE_END();
                break;

            case 5:
                DISPLAY();
                break;

            case 6:
                return 0;

            default:
                printf("Invalid Choice! Try Again.\n");
        }
    }
}

