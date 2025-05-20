#include <stdio.h>
#include <stdio_ext.h>

char *my_strchr(const char *str, int c) {
	if (str == NULL) {
		return NULL;
	}
	    
	while (*str != '\0') {
		if (*str == (char)c) {
		      return (char *)str;
		}
		str++;
	}

	if ((char)c == '\0') {
		return (char *)str;
	}
	return NULL;
}

int main() {
	char ch;
	char str[20];
	printf("Enter the string : ");
	scanf("%[^\n]s",str);

	__fpurge(stdin);
	printf("Enter the Character : ");
	scanf("%c",&ch);
	
	const char * res = my_strchr(str, ch);

	if (res != NULL) {
		printf("Character '%c' found at position: %ld\n",ch, res - str);
	}
	else {
		printf("Character '%c' not found.\n", ch);
	}
	return 0;
}
