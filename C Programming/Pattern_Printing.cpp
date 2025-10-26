// Program to print Pattern:

#include <stdio.h>

int main() {
	printf("\n===== Pattern Printing: =====\n");

	for(int i = 1; i <= 4; i ++) {
		for(int j = 0; j < (2 * i - 1); j ++) {
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}

