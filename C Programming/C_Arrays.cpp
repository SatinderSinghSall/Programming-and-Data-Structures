// C Arrays:

#include <stdio.h>

int main() {
	printf("\n===== C Arrays: =====\n");

	int myNumbers[] = {25, 50, 75, 100};
	printf("%d", myNumbers[0]);

	myNumbers[0] = 33;
	printf("%d", myNumbers[0]);

	printf("\n");

	for(int i = 0; i < 4; i ++) {
		printf("%d ", myNumbers[i]);
	}

	printf("\n");

	printf("%zu", sizeof(myNumbers));

	printf("\n");

	int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
	printf("%d", length);

	printf("\n");

	for (int i = 0; i < length; i++) {
	  printf("%d\n", myNumbers[i]);
	}

	return 0;
}

