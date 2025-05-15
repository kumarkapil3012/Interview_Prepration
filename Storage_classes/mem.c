#include <stdio.h>
#include <stdlib.h>


int main() {

	int * ptr = (int *)malloc(10);
	int * ptr1 = (int *)malloc(0);
//	int * ptr2 = (int *)malloc(-100);   // undefined behaviour because -ve change to +ve and it will be huge number
	int * ptr3 = (int *)realloc(ptr, 0);

	//free(ptr);
	free(ptr1);
	//free(ptr2);
	free(ptr3);

	printf("Executed Successfully !!!\n");
	
	return 0;
}

