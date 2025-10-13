// Commission Earned:

#include <stdio.h>

int main() {
	float x, y, z;
	float commission = 0.0;

	printf("\n===== Commission Earned: =====\n");

	printf("\nEnter the amount of sales in Region X: ");
	scanf("%f", &x);

	printf("Enter the the amount of sales in Region Y: ");
	scanf("%f", &y);

	printf("Enter the the amount of sales in Region Z: ");
	scanf("%f", &z);

	// Region X Commission:
	if(x > 5000) {
		commission = commission + x * 0.06f;
	} else {
		commission = commission + x * 0.05f;
	}

	// Region Y Commsiison:
	if(y > 6000) {
		commission = commission + y * 0.065f;
	} else {
		commission = commission + y * 0.035f;
	}

	// Region Y Commission:
	if(z > 5500) {
		commission = commission + z * 0.067f;
	} else {
		commission = commission + z * 0.057f;
	}

	printf("\nThe total commission earned is: %.2f\n", commission);

	return 0;
}

