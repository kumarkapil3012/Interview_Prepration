#include <stdio.h>

int main() {
	char ch[2];

	if((&ch[1] - &ch[0]) < 0) {
		printf("Growing Downwards !!!\n");
	} else {
		printf("Growing Upwards !!!\n");
	}
	return 0;
}
