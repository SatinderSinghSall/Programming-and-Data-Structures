// Strings in C (Basic to Advanced)

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void printLine() {
    printf("\n-------------------------------------------\n");
}

int main() {
    printf("\n===== STRINGS IN C: COMPLETE EXAMPLES =====\n");

    // -----------------------------------------------------
    // 1. BASIC STRING DECLARATION & PRINTING
    // -----------------------------------------------------
    printLine();
    printf("1. Basic String Declaration:\n");

    char name[] = "Satinder Singh Sall";
    printf("Name: %s\n", name);
    printf("Length of \"%s\" is: %zu\n", name, strlen(name));

    // -----------------------------------------------------
    // 2. STRING INPUT USING scanf AND fgets
    // -----------------------------------------------------
    printLine();
    printf("2. String Input (scanf and fgets):\n");

    char str1[50];
    printf("Enter a word (scanf stops at space): ");
    scanf("%s", str1);
    printf("You entered (scanf): %s\n", str1);

    getchar();  // clear buffer for fgets

    char str2[50];
    printf("Enter a full sentence (fgets): ");
    fgets(str2, sizeof(str2), stdin);
    printf("You entered (fgets): %s", str2);

    // -----------------------------------------------------
    // 3. STRING COPY, CONCATENATION, COMPARISON
    // -----------------------------------------------------
    printLine();
    printf("3. Copy, Concatenate, Compare:\n");

    char a[50], b[50];
    strcpy(a, "Hello");
    strcpy(b, "World");

    printf("Copied strings: a = %s, b = %s\n", a, b);

    strcat(a, b);
    printf("After concatenation: a = %s\n", a);

    printf("Comparison (Hello vs World): %d\n", strcmp("Hello", "World"));

    // -----------------------------------------------------
    // 4. MANUAL STRING LENGTH (Custom strlen)
    // -----------------------------------------------------
    printLine();
    printf("4. Custom strlen():\n");

    char sample[] = "Satinder";
    int len = 0;

    for (int i = 0; sample[i] != '\0'; i++)
        len++;

    printf("Manual length of %s is: %d\n", sample, len);

    // -----------------------------------------------------
    // 5. REVERSE STRING (Without strrev)
    // -----------------------------------------------------
    printLine();
    printf("5. Reverse a String:\n");

    char rev[50] = "Programming";
    int n = strlen(rev);

    for (int i = 0; i < n/2; i++) {
        char temp = rev[i];
        rev[i] = rev[n - i - 1];
        rev[n - i - 1] = temp;
    }
    printf("Reversed string: %s\n", rev);

    // -----------------------------------------------------
    // 6. PALINDROME CHECK
    // -----------------------------------------------------
    printLine();
    printf("6. Palindrome Check:\n");

    char pal[] = "madam";
    int isPal = 1;
    int l = 0, r = strlen(pal) - 1;

    while (l < r) {
        if (pal[l] != pal[r]) {
            isPal = 0;
            break;
        }
        l++; r--;
    }

    if (isPal)
        printf("%s is a palindrome\n", pal);
    else
        printf("%s is NOT a palindrome\n", pal);

    // -----------------------------------------------------
    // 7. STRING TO UPPERCASE / LOWERCASE
    // -----------------------------------------------------
    printLine();
    printf("7. Uppercase / Lowercase:\n");

    char caseStr[] = "Satinder Sall";

    printf("Original: %s\n", caseStr);

    // Uppercase
    for (int i = 0; caseStr[i]; i++)
        caseStr[i] = toupper(caseStr[i]);
    printf("Uppercase: %s\n", caseStr);

    // Lowercase
    for (int i = 0; caseStr[i]; i++)
        caseStr[i] = tolower(caseStr[i]);
    printf("Lowercase: %s\n", caseStr);

    // -----------------------------------------------------
    // 8. SUBSTRING SEARCH (strstr)
    // -----------------------------------------------------
    printLine();
    printf("8. Substring Search (strstr):\n");

    char text[] = "I love programming in C language";
    char *found = strstr(text, "programming");

    if (found)
        printf("Substring found: %s\n", found);
    else
        printf("Substring not found\n");

    // -----------------------------------------------------
    // 9. TOKENIZING A STRING (strtok)
    // -----------------------------------------------------
    printLine();
    printf("9. Tokenizing String using strtok:\n");

    char sentence[] = "C is a powerful programming language";
    char *token = strtok(sentence, " ");

    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    // -----------------------------------------------------
    // 10. ARRAY OF STRINGS (2D Array)
    // -----------------------------------------------------
    printLine();
    printf("10. Array of Strings:\n");

    char cities[3][20] = {"Delhi", "Mumbai", "Kolkata"};

    for (int i = 0; i < 3; i++)
        printf("%s\n", cities[i]);

    // -----------------------------------------------------
    // 11. DYNAMIC STRING USING malloc
    // -----------------------------------------------------
    printLine();
    printf("11. Dynamic String using malloc:\n");

    char *dyn = (char *) malloc(30 * sizeof(char));
    strcpy(dyn, "Dynamic Memory String");
    printf("Dynamic: %s\n", dyn);
    free(dyn);

    printLine();
    printf("===== END OF STRING EXAMPLES =====\n");

    return 0;
}

