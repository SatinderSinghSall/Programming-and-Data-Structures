#include <stdio.h>

int main() {
	int rows = 3;

	// outer loop:
	for(int i = 1; i <= rows; i ++) {
		// inner loop:
		for(int j = 1; j <= i; j ++) {
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}

