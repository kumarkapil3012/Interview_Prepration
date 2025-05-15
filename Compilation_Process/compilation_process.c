#include <stdio.h>

#define N 100

static int x;

int main() {
	int a = 10, b = 20 , c;
	static int x = 50;

#ifdef N
	c = a + x + N;
#else
	c = a + x + b;
#endif
	printf("%d\n",c);
	return 0;
}

