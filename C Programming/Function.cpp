// Function in C:

#include <stdio.h>

// 1. No arguments, No return value
void greeting() {
    char name[20] = "Vaibhav";
    printf("\n[1] Hello, %s", name);
}

// 2. Arguments, No return value
void showAge(int age) {
    printf("\n[2] Your age is: %d", age);
}

// 3. No arguments, Return value
int getLuckyNumber() {
    int num = 7;
    return num;
}

// 4. Arguments and Return value
int add(int a, int b) {
    return a + b;
}

int main() {

    printf("=== Function Types in C ===\n");

    // 1. No arguments, No return value
    greeting();

    // 2. Arguments, No return value
    showAge(21);

    // 3. No arguments, Return value
    int lucky = getLuckyNumber();
    printf("\n[3] Lucky Number is: %d", lucky);

    // 4. Arguments and Return value
    int result = add(10, 20);
    printf("\n[4] Addition = %d", result);

    printf("\n\nProgram Completed Successfully!\n");

    return 0;
}

