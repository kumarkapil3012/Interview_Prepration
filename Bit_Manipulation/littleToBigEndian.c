#include <stdio.h>

int main() {
	int n = 0x12345678;

	n = ( (n & 0xFF000000) >> 24) | ( (n & 0x000000FF) << 24) | ( (n & 0x00FF0000) >> 8) | ( (n & 0x0000FF00) << 8);

	printf("%x\n",n);

	return 0;
}
