// Linked List: Singly Linked List Data Structure

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

// Insert at Beginning
void INSERT_BEGIN(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;

    printf("\nItem %d Inserted at Beginning.\n", value);
}

// Insert at End
void INSERT_END(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL) {
        head = newNode;
    } else {
        struct Node* temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
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
    struct Node* prev = NULL;

    // Single node case
    if(temp->next == NULL) {
        printf("\nItem %d Deleted from End.\n", temp->data);
        free(temp);
        head = NULL;
        return;
    }

    // Traverse to last node
    while(temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    printf("\nItem %d Deleted from End.\n", temp->data);
    prev->next = NULL;
    free(temp);
}

// Display Linked List
void DISPLAY() {
    if(head == NULL) {
        printf("\nList is Empty.\n");
        return;
    }

    struct Node* temp = head;
    printf("\nLinked List: ");
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int choice, value;

    printf("\n=== Singly Linked List Implementation ===\n");

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

