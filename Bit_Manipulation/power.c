#include <stdio.h>

double power(double base, int exponent) {
	double result = 1.0;
	int negative = 0;

	// Handle negative exponent
	if (exponent < 0) {
		negative = 1;
		exponent = -exponent;
	}

	// Multiply base exponent times
	for (int i = 0; i < exponent; ++i) {
		result *= base;
	}

	// If exponent was negative, take reciprocal
	if (negative) {
		result = 1.0 / result;
	}

	return result;
}

int main() {
	double base = 2.0;
	int exponent = -3;

	printf("%.2f^%d = %.6f\n", base, exponent, power(base, exponent));
	return 0;
}
