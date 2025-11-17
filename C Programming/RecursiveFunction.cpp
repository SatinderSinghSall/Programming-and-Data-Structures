// Example: Simple Recursive Function

#include <stdio.h>

void fun(int n) {
    if (n == 0) { // Base Case
    	return;
	}            

    printf("%d ", n);
    fun(n - 1); // Recursive case
}

int main() {
    fun(5);
    return 0;
}

