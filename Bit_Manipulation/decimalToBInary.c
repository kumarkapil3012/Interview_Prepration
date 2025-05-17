#include <stdio.h>
#include <stdlib.h>

void generatebits(int num)
{
	int temp;
	if(num) {
		temp = num % 2;
		generatebits(num >>= 1);
	        printf("%d",temp);
       }
}

void reverse(char *bin, int st, int end) {
	while(st<end) {
		char temp = bin[st];
		bin[st] = bin[end];
		bin[end] = temp;
		st++,end--;
	}
}

char* decToBinary(int num) {
	int index = 0;
	char* bin = (char*) malloc(32 * sizeof(char));
		  
	while (num > 0) {
		int bit = num % 2;
		bin[index++] = '0' + bit;
		num /= 2;
	}
	bin[index] = '\0';

	reverse(bin, 0, index-1);
  	return bin;
}

char* decToBinarybitwise(int num) {
	int index = 0;
	char* bin = (char*) malloc(32 * sizeof(char));
		  
	while (num > 0) {
		int bit = num & 1;
		bin[index++] = '0' + bit;
		num >>= 1;
	}
	bin[index] = '\0';

	reverse(bin, 0, index-1);
  	return bin;
}


int main() {
	int num = 127;
	generatebits(num);
	printf("\n");	
	num = 129;
	generatebits(num);
	printf("\n");	
	num = 12;
	char* bin = decToBinary(num);    
	printf("%s\n", bin);
	num = 30;
	char* bin2 = decToBinarybitwise(num);    
	printf("%s\n", bin2);
	return 0;
}
