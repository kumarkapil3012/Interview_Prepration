#include <stdio.h>

#define N 100

static int x;    // .bss
static int y = 10;  // data section

const static int x1;  // .rodata
const static int y1 = 10;  // .rodata
 
int a;   // .bss
int b = 10; // data section

const int a1;   // .rodata
const int b1 = 10;  // .rodata

int main() {
	int m, n = 20;
	const int m1;
	const int n1 = 11;

	const static int z = 50;
	const static int q;

	int *p = (int *)&x;
	*p  = 1111;


	int *p1 = (int *)&x1;
	//*p1  = 222;     // seg fault beacuse x1 is stored in read only section

	printf("%d  %d \n",*p, x);
	//printf("%d  %d \n",*p1, x1);
	return 0;
}

