#include <stdio.h>
#include <stdio_ext.h>

char *my_strrchr(const char *str, int c) {
	const char *last_occurrence = NULL;
	while (*str != '\0') {
		if (*str == c) {
			last_occurrence = str;
		}
		str++;
	}
	if (c == '\0') 
		return (char*)str;
	return (char *)last_occurrence;
}

int main() {
	char ch;
	char str[20];
	printf("Enter the string : ");
	scanf("%[^\n]s",str);

	__fpurge(stdin);
	printf("Enter the Character : ");
	scanf("%c",&ch);
	
	const char * res = my_strrchr(str, ch);

	if (res != NULL) {
		printf("Character '%c' found at position: %ld\n",ch, res - str);
	}
	else {
		printf("Character '%c' not found.\n", ch);
	}
	return 0;
}
