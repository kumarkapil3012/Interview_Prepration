#include <stdio.h>

typedef struct {
	int a;
	int b;
	char c;
	float f;
}mystruct;

struct mystruct1{
	int a;
	int b : 1;
	char c : 4;
	int z : 16;
       //float f : 1;  // on float we can't apply bitfields
};

int main() {

	mystruct st;
	struct mystruct1 st1;

	printf("Size of Struct : %lu\n", sizeof(st));
	printf("Size of Bitfiled Struct : %lu\n", sizeof(st1));
	
	st1.b = 1;
	st1.c = 12;
	st1.z = 250;

	//required bitwise operators to access them properly using repective bit mask
	printf("%d\n", (st1.b&1));  
	printf("%d\n", (st1.c&0xF));
	printf("%d\n", (st1.z&0xFFFF));


	return 0;
}
