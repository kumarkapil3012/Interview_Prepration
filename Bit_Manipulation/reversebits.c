#include <stdio.h>

void reverse_loop(int num) {
	int i,j;
	for(i = 0, j = 31; i<j; i++, j--) { 
		if( !(num & ( 1 << i)) != !(num & (1 << j))) 
			num ^= (1<<i) | (1<<j);
	}
	printf("%d \n",num);
	printf("%b \n",num);
}

void reverse_without_loop(int num) {
	num = (num >> 1) & 0x55555555 | (num & 0x55555555) << 1;
	num = (num >> 2) & 0x33333333 | (num & 0x33333333) << 2;
	num = (num >> 4) & 0x0F0F0F0F | (num & 0x0F0F0F0F) << 4;
	num = (num >> 8) & 0x00FF00FF | (num & 0x00FF00FF) << 8;
	num = (num >> 16) | (num << 16);

	printf("%d \n",num);
	printf("%b \n",num);
}


int main() {
	int num;

	printf("Enter Number : ");
	scanf("%d",&num);
	printf("%d \n",num);
	printf("%b \n",num);
	
	reverse_loop(num);
	reverse_without_loop(num);

	return 0;
}
