// Bonus Calculator:

#include <stdio.h>

int main() {
    char gender;
    float salary, bonus = 0;

	printf("\n===== Bonus Calculator: =====\n");

    printf("\nEnter the Gender of the Employee (M/F): ");
    scanf(" %c", &gender);

    printf("Enter the Basic Salary: ");
    scanf("%f", &salary);

    if (gender == 'M' || gender == 'm') {
        if (salary <= 10000)
            bonus = 0.05 * salary;
        else if (salary <= 20000)
            bonus = 0.045 * salary;
        else
            bonus = 0.042 * salary;
    }
    else if (gender == 'F' || gender == 'f') {
        if (salary <= 8000)
            bonus = 0.055 * salary;
        else if (salary <= 15000)
            bonus = 0.048 * salary;
        else
            bonus = 0.046 * salary;
    }
    else {
        printf("Invalid Gender entered!\n");
        return 0;
    }

    printf("Bonus earned: %.2f\n", bonus);

    return 0;
}

