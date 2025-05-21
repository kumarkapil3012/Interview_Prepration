#include <stdio.h>
#include <stdio_ext.h>

char *my_strstr(const char *haystack, const char *needle) {
	if (*needle == '\0') {
		return (char *)haystack;
	}
	while (*haystack != '\0') {
		const char *h = haystack;
		const char *n = needle;
		while (*h != '\0' && *n != '\0' && *h == *n) {
			h++;
			n++;
		}
		if (*n == '\0') {
			return (char *)haystack;
		}
		haystack++;
	}
	return NULL;
}

int main() {
	char str[20], substr[20];
	printf("Enter the string : ");
	scanf("%[^\n]s",str);

	__fpurge(stdin);
	printf("Enter the Sub-string : ");
	scanf("%s",substr);
	
	const char * res = my_strstr(str, substr);

	if (res != NULL) {
		printf("Character '%s' found at position: %ld\n",substr, res - str);
	}
	else {
		printf("Character '%s' not found.\n", substr);
	}
	return 0;
}
