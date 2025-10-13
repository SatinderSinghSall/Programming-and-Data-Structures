#include <stdio.h>

int main() {
	int i = 0;

	// While Loop:
	while (i <= 5) {
	  printf("%d\n", i);
	  i++;
	}

	// do while loop:
	do {
		printf("%d\n", i);
		i++;
	}
	while (i < 5);

	// for loop:
	for(int j = 0; j <= 5; j ++) {
		printf("%d", j);
	}

	return 0;
}

