#include <stdio.h>

int main() {
	int a = 20;

	int *p = &a;

	int **q = &p;

	int ***r = &q;

	int ****s = &r;

	printf("Value of a %d : %d : %d : %d : %d\n",a, *p, **q, ***r, ****s);
	printf("Address of a %p : %p : %p : %p : %p\n",&a, p, *q, **r, ***s);
	printf("Address of p %p : %p : %p : %p\n", &p, q, *r, **s);
	printf("Address of q %p : %p : %p\n",&q, r, *s);
	printf("Address of r %p : %p\n", &r, *s);
	printf("Address of s %p\n", &s);

	return 0;
}

