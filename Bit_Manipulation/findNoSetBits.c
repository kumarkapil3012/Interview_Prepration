#include <stdio.h>

int main() {
	int num,temp,count = 0,set_count = 0, reset_count = 0;

	printf("Enter Number : ");
	scanf("%d",&num);
	temp = num;
	while(num != 0) {
		if((num & 1) == 1) 
			set_count++;
		else 
			reset_count++;
		num >>= 1;
	}
	//diff method
	while(temp != 0) {
		temp &= (temp-1);
		count++;
	}

	printf("Number of Set bits : %d\n",count);
	printf("Number of Set bits : %d\n",set_count);
	printf("Number of Reset bits : %d\n",reset_count);

	return 0;
}
