#include <stdio.h>

int main() {
	int num,set_count = 0, reset_count = 0;

	printf("Enter Number : ");
	scanf("%d",&num);

	while(num != 0) {
		if((num & 1) == 1) 
			set_count++;
		reset_count++;
		num >>= 1;
	}

	printf("Number of Set bits : %d\n",set_count);
	printf("Number of Reset bits : %d\n",reset_count);

	return 0;
}
