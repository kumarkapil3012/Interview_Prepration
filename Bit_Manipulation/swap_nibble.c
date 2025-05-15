#include <stdio.h>

int main() {
	int num = 0x12;

	num = ((num & 0xF0)>>4) | ((num & 0x0F)<<4);
	printf("Num : %x\n",num);

	return 0;
}
