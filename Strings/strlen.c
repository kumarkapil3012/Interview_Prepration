#include <stdio.h>

int my_strlen(char *str) {
	int count = 0;
	if(str == NULL) {
		return 0;
	}
	while(*str != '\0') {
		count++;
		str++;
	}
	return count;
}

int main() {
	char str[20];
	printf("Enter String : ");
	scanf("%s",str);

	int len = my_strlen(str);

	printf("String : %s\n",str);
	printf("String Length : %d\n",len);

	return 0;
}
