// Linked List: Doubly Linked List Data Structure

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* head = NULL;

// Insert at Beginning
void INSERT_BEGIN(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;

    if(head != NULL)
        head->prev = newNode;

    head = newNode;

    printf("\nItem %d Inserted at Beginning.\n", value);
}

// Insert at End
void INSERT_END(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL) {
        newNode->prev = NULL;
        head = newNode;
    } else {
        struct Node* temp = head;
        while(temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
        newNode->prev = temp;
    }

    printf("\nItem %d Inserted at End.\n", value);
}

// Delete from Beginning
void DELETE_BEGIN() {
    if(head == NULL) {
        printf("\nList is Empty!\n");
        return;
    }

    struct Node* temp = head;
    head = head->next;

    if(head != NULL)
        head->prev = NULL;

    printf("\nItem %d Deleted from Beginning.\n", temp->data);
    free(temp);
}

// Delete from End
void DELETE_END() {
    if(head == NULL) {
        printf("\nList is Empty!\n");
        return;
    }

    struct Node* temp = head;

    // If only one node exists
    if(temp->next == NULL) {
        printf("\nItem %d Deleted from End.\n", temp->data);
        free(temp);
        head = NULL;
        return;
    }

    // Traverse to last node
    while(temp->next != NULL)
        temp = temp->next;

    printf("\nItem %d Deleted from End.\n", temp->data);

    temp->prev->next = NULL;
    free(temp);
}

// Display Forward
void DISPLAY_FORWARD() {
    if(head == NULL) {
        printf("\nList is Empty.\n");
        return;
    }

    struct Node* temp = head;
    printf("\nDoubly Linked List (Forward): ");
    while(temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Display Reverse
void DISPLAY_REVERSE() {
    if(head == NULL) {
        printf("\nList is Empty.\n");
        return;
    }

    struct Node* temp = head;

    // Go to last node
    while(temp->next != NULL)
        temp = temp->next;

    printf("\nDoubly Linked List (Reverse): ");
    while(temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

int main() {
    int choice, value;

    printf("\n=== Doubly Linked List Implementation ===\n");

    printf("\nOperations:\n");
    printf("1. Insert at Beginning\n");
    printf("2. Insert at End\n");
    printf("3. Delete from Beginning\n");
    printf("4. Delete from End\n");
    printf("5. Display Forward\n");
    printf("6. Display Reverse\n");
    printf("7. Exit\n");

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
                DISPLAY_FORWARD();
                break;

            case 6:
                DISPLAY_REVERSE();
                break;

            case 7:
                return 0;

            default:
                printf("Invalid Choice! Try Again.\n");
        }
    }
}

