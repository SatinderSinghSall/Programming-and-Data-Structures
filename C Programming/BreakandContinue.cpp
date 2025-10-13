// C Break and Continue:

#include <stdio.h>

int main() {
	int i;

	// Break:
	for (i = 0; i < 10; i++) {
	  if (i == 4) {
	    break;
	  }
	  printf("%d\n", i);
	}

	// Continue:
	for (i = 0; i < 10; i++) {
	  if (i == 4) {
	    continue;
	  }
	  printf("%d\n", i);
	}

	return 0;
}

