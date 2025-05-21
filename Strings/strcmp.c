#include <stdio.h>

int my_strcmp(const char *str1, const char *str2) {
	if (str1 == NULL && str2 == NULL) {
		return 0;
			        }
	if (str1 == NULL) {
		return -1;
	}
	if (str2 == NULL) {
		return 1;
	}

	while (*str1 != '\0' && *str2 != '\0') {
		if (*str1 != *str2) {
			return (*str1 > *str2) ? 1 : -1;
	        }
	        str1++;
	        str2++;
	}

	if (*str1 == '\0' && *str2 == '\0') {
	        return 0;
	} else if (*str1 == '\0') {
	        return -1;
	} else {
		return 1;
	}
}

int main() {
	char str1[20], str2[20];
	printf("Enter String 1 : ");
	scanf("%s",str1);
	printf("Enter String 2 : ");
	scanf("%s",str2);

	int ret  = my_strcmp(str1, str2);

	if(ret == 0) {
		printf("%s is equal to %s\n",str1, str2);
	} else if(ret > 0) {
		printf("%s is greater to %s\n",str1, str2);
	} else {
		printf("%s is smaller to %s\n",str1, str2);
	}
	return 0;
}

