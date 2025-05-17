#include <stdio.h>
#include <string.h>

int using_bitwise(int num) {
	int pow = 0, res = 0;
	while (num > 0) {
		if (num % 10 == 1) {
			res |= (1 << pow);
		}
	        num /= 10;
	        pow++;
	}
	return res;
}

int using_arith(int num) {
	int pow = 1, res = 0;
	while(num>0) {
		if(num % 10 == 1) {
			res += pow;
		}
		num /=10;
		pow *=2;
	}
	return res;
}

int using_string(char *num) {
	int len = strlen(num)-1;
	int pow  = 1, res = 0;
	while(len >= 0) {
		res += (num[len] - '0') *pow;
		pow *= 2;
		len--;
	}
	return res;
}

int main() {
	int num = 1111;
	char str[] = "1111";

	printf("%d\n", using_bitwise(num));
	printf("%d\n", using_arith(num));
	printf("%d\n", using_string(str));

	return 0;
}
