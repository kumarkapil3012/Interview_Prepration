#include <stdio.h>

int main() {
	int num = 0x1;

	if((char)num & 1) {
		printf("Little Endian\n");
	} else {
		printf("Big Endain\n");
	}
	return 0;
}
