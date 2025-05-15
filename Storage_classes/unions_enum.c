#include <stdio.h>

typedef union {
	int a;
	char b;
}myunion;

enum direction {
	    EAST, NORTH, WEST, SOUTH
};

int main() {
	myunion u;
	u.a = 50;

	printf("Value of a : %d\n",u.a);
	printf("Value of c : %c\n",u.b);
	//Creating enum variable
	enum direction dir = NORTH;
	printf("%d\n", dir);
	             
	// This is valid too
	dir = 3;
	printf("%d\n", dir);

	printf("Size of Union : %lu\n",sizeof(u));
	printf("Size of Enums : %lu\n",sizeof(dir));

	return 0;
}
