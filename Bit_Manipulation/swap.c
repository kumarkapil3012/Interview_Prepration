#include <stdio.h>

void swap_bitwise(int num1, int num2) {
	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;
	printf("Number After swap using xor : %d : %d\n",num1, num2);
}


void swap_add_sub(int num1, int num2) {
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	printf("Number After swap using add/sub : %d : %d\n",num1, num2);
}

void swap_mul_div(int num1, int num2) {
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	printf("Number After swap using mul/div : %d : %d\n",num1, num2);
}

int main() {
	int num1, num2;
	printf("Enter two numbers : ");
	scanf("%d%d",&num1,&num2);

	printf("Number before swap : %d : %d\n",num1, num2);

	swap_bitwise(num1,num2);
	swap_add_sub(num1, num2);
	swap_mul_div(num1, num2);
	return 0;
}


