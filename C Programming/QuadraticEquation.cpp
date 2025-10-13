// Quadratic Equation:

#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c, d, root1, root2;

	printf("\n===== Quadratic Equation: =====\n");

    printf("\nEnter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
    }
    else if (d == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and equal: %.2f\n", root1);
    }
    else {
        printf("Roots are imaginary.\n");
    }

    return 0;
}

