#include <stdio.h>

int main() {
	int num;
	printf("Enter Number : ");
	scanf("%d",&num);

	if((num>>31) & 1) {
		printf("%d number is negative\n",num);
	}
	else {
		printf("%d number is positive\n",num);
	}
	return 0;
}
