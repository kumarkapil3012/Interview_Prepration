#include <stdio.h>

//#define MY_SIZEOF(x)  ({__typeof__(x) y;((char*)(&y+1)-(char*)(&y));})
#define MY_SIZEOF(y)  (((char*)(&y+1)-(char*)(&y)))

int main() {
	int x;
	float y;
	double c;
	long z;
	short int a;
	long double b;

	printf("Int : %ld\n", MY_SIZEOF(x));
	printf("Float : %ld\n", MY_SIZEOF(y));
	printf("long : %ld\n", MY_SIZEOF(z));
	printf("double : %ld\n", MY_SIZEOF(c));
	printf("short int : %ld\n", MY_SIZEOF(a));
	printf("long double : %ld\n", MY_SIZEOF(b));
	return 0;
}


