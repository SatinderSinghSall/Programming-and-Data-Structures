// Arrays in C:

#include <stdio.h>

int main () {
	printf("\nArrays in C:\n");

	int marks[5] = {20, 30, 40, 50, 60};
	int length = sizeof(marks) / sizeof(marks[0]);

	printf("\nArray Elements:\n");
	for(int i = 0; i < length; i ++) {
		printf("Marks[%d] : %d\n", i, marks[i]);
	}
}

