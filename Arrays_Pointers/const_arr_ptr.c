#include <stdio.h>

int main() {

	int a = 12;
	const int b = 20;
	int *p;     		// p is a pointer which will point to int variable
	const int *q;		// q is a pointer which will point to const int variable
	int *const r;		// r is a constant pointer which will point to int variable
	const int *const s;	// s is a constant pointer which will point to const int variable
	
	printf("Value of a : %d\n",a);

	// modify a using pointer	
	//p = &a;
	//*p = 15;
	
	// modify const b using pointer but b = 22 is not allowed
	//p = &b;
	//*p = 22;
	
	// not allowed because q is pointing to a constant integer
	//q = &a;
	//*q = 15;
	
	// q = &b   // allowed because q is not a constant pointer
	
	// r = &a   // allowed
	// r = &b   // not allowed r is a constant pointer
	
	// r = &a;  // allowed
	// *r = 11; // not allowed r is pointing to a constant integer
	// r = &b;  // mot allowed r isa constant pointer

	printf("Value of a : %d\n",a);

	return 0;
}
