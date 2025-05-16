#include <stdio.h>

int main() {
	int num;

	printf("Enter Number : ");
	scanf("%d",&num);

	if((num &(num-1)) == 0) {
		printf("%d is power of two\n",num);
	} else {
		printf("%d is not power of two\n",num);
	}

	return 0;
}
