/*
	Input User's roll no, reg. no, name, branch,
	subjects marks, & cal. total marks & percentage
	with grades.
*/

#include <stdio.h>

int main() {
	int roll_no, reg_no;
	char name[50], branch[10];
	int subject1, subject2, subject3;
	float total_marks, percentage;
	char grade;

	printf("\n===== University Grading System: =====\n");

	printf("\nEnter your Roll Number: ");
	scanf("%d", &roll_no);

	printf("Enter your Registrartion Number: ");
	scanf("%d", &reg_no);

	printf("Enter your Name: ");
	scanf("%s", &name);

	printf("Enter your Branch: ");
	scanf("%s", &branch);

	printf("\n----- Enter your Subject's marks: -----\n");

	printf("\nEnter your Subject 1 marks: ");
	scanf("%d", &subject1);

	printf("Enter your Subject 2 marks: ");
	scanf("%d", &subject2);

	printf("Enter your Subject 3 marks: ");
	scanf("%d", &subject3);

	total_marks = subject1 + subject2 + subject3;
	percentage = (total_marks) / 3;

	printf("\n----- Your Marks Grade's -----\n ");

	printf("\nYour Name is: %s", name);
	printf("\nYour Branch is: %s", branch);
	printf("\nYour Roll Number is: %d", roll_no);
	printf("\nYour Registration Number is: %d", reg_no);
	printf("\nYour TOTAL MARKS is: %f / 300", total_marks);
	printf("\nYour PERCENTAGE is: %f", percentage);

	return 0;
}

