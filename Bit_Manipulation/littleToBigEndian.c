#include <stdio.h>

#define BUFFER_SIZE 4

union littletobig{
	unsigned int num;
	char temp[BUFFER_SIZE];
};

void using_union(unsigned int num) {
	union littletobig input ,output;
	input.num = num;
	for(int i=0; i<BUFFER_SIZE; i++) {
		output.temp[i] = input.temp[BUFFER_SIZE-1-i];
	}
	printf("%x\n",output.num);
}


int main() {
	int n = 0x12345678;
	
	using_union(n);
	n = ( (n & 0xFF000000) >> 24) | ( (n & 0x000000FF) << 24) | ( (n & 0x00FF0000) >> 8) | ( (n & 0x0000FF00) << 8);

	printf("%x\n",n);

	return 0;
}
