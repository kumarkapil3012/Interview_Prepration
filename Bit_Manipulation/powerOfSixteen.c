#include <stdio.h>
#include <stdbool.h>

bool checkpower(int num) {
	if(num == 0) {
		return 0;
	}
	while( num != 1) {
		if((num%16) != 0) {
			return 0;
		}
		num /= 16;
	}
	return 1;
}

bool checkbitwise(int num) {
	if(num == 0)	
		return 0;

	bool poweroftwo = !(num &(num-1));

	bool mask = !(num & 0xEEEEEEEE);

	return poweroftwo && mask;
}

bool checkmodules(int num) {
	if(num == 0) 
		return 0;
	return !(num & (num-1)) && ((num % 15) == 1);
}

int main() {
	int num;

	printf("Enter Number : ");
	scanf("%d",&num);

	if(checkpower(num)) {
		printf("%d number is power of 16\n",num);
	} else {
		printf("%d number is not power of 16\n",num);
	}
	if(checkbitwise(num)) {
		printf("%d number is power of 16\n",num);
	} else {
		printf("%d number is not power of 16\n",num);
	}
	if(checkmodules(num)) {
		printf("%d number is power of 16\n",num);
	} else {
		printf("%d number is not power of 16\n",num);
	}

	return 0;
}
