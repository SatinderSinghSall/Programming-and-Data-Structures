// Area & Perimeter of Circle:

#include<stdio.h>
#define PI 3.1416

int main() {
	float radius, area, perimeter;

	printf("\n===== Area & Perimeter of Circle: =====\n");

	printf("\nEnter the Radius of Circle: ");
	scanf("%f", &radius);

	area = PI * (radius * radius);
	perimeter = 2 * PI * radius;

	printf("\nThe Area of the Circle: %f", area);
	printf("\nThe Perimeter of the Circle: %f", perimeter);

	return 0;
}

