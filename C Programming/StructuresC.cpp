// Structures in C Programming:

#include <stdio.h>
#include <string.h>

struct studentDetails {
	int stu_rollNo;
	char stu_sec;
	char stu_name[50];
};

int main() {
	printf("\n=== Student Details: ===\n");

	struct studentDetails s1;

	s1.stu_rollNo = 180;
	s1.stu_sec = 'C';
	strcpy(s1.stu_name, "Satinder Singh Sall");

	printf("\nStudent Roll Number: %d", s1.stu_rollNo);
	printf("\nStudent Section: %c", s1.stu_sec);
	printf("\nStudent Name: %s", s1.stu_name);

	return 0;
}

