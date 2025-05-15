#include <stdio.h>

int main() {
	int num = 0x1234;
	int pos ;
	printf("Enter the bit position : ");
	scanf("%d",&pos);
	
	printf("Original Number %x\n", num);
	//set a bit
	num = num | (1<<pos);
	printf("Number after set the %d bit : %x\n",pos, num);
	
	//reset a bit
	num = num &~(1<<pos);
	printf("Number after reset the %d bit : %x\n",pos, num);
		
	//toggle a bit
	num = num ^ (1<<pos);
	printf("Number after toggling the %d bit : %x\n",pos, num);
	
	//check a bit
	if((num  & (1<<pos)) != 0) {	
		printf("%d bit is set\n",pos);
	} else {
		printf("%d bit is not set\n",pos);
	}	

	return 0;
}
