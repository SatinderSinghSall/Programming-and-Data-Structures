// Input Details & Display:

#include <stdio.h>

int main() {
    char name[50];
    int roll_no;
    float marks;

    printf("\n===== Enter your Details: =====\n");

    printf("\nEnter your Name: ");
    scanf("%49s", name);

    printf("Enter your Roll Number: ");
    scanf("%d", &roll_no);

    printf("Enter your Marks: ");
    scanf("%f", &marks);

    printf("\n===== Displaying your Details: =====\n");
    printf("\nYour name is: %s", name);
    printf("\nYour roll number is: %d", roll_no);
    printf("\nYour marks are: %.2f\n", marks);

    return 0;
}

