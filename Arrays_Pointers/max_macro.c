#include <stdio.h>

#define MAX_TWO(a,b) ((a)<(b)?b:a)

#define MAX_THREE(a,b,c)  ((a)>(b)?((a)>(c)?(a):(c)):((b)>(c)?(b):(c)))

/*
 	if(a > b) 
		if(a > c) 
			-> a
		else 
			-> c
	else 
		if(b > c)
			-> b
		else 
			-> c
*/

int main() {
	int a,b,c;
	printf("Enter three numbers : ");
	scanf("%d%d%d",&a,&b,&c);

	printf("%d is greater\n",MAX_TWO(a,b));
	printf("%d is greater\n",MAX_THREE(a,b,c));

	return 0;
}
