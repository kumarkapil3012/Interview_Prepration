#include <stdio.h>
#include <string.h>
#include <limits.h>

#define SIZE 50

int my_atoi(char *str, int len) {
	int sign=1,res=0, i=0;
	
	while(str[i] == ' ') {
		i++;
	}
	
	if(str[i] == '-') {
		sign = -1;
		i++;
	}
	if(str[i] == '+') {
		sign = 1;
		i++;
	}

	while(str[i] >= '0' && str[i] <= '9') {
		int rem = str[i] - '0';

		if(res > INT_MAX/10 || (res == INT_MAX/10 && rem > INT_MAX % 10)) {
			return (sign == 1) ? INT_MAX : INT_MIN;
		}

		res = res * 10 + rem;
		i++;
	}
	return res * sign;
}


int main() {
	char str[SIZE];
	printf("Enter the String : ");
	scanf("%[^\n]s",str);
	
	int num = my_atoi(str, strlen(str));
	printf("Number is : %d\n",num);

	return 0;
}
