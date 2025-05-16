#include <stdio.h>

int main() {
	int num;
	printf("Enter Number : ");
	scanf("%d",&num);

	printf("Number is : %d\n",num);

	num = -(~num);
	printf("After adding 1 : %d\n",num);
	return 0;
}
