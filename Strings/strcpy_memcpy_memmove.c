#include <stdio.h>
#include <stddef.h>

char *my_strcpy(char *dest, const char *src) {
	char *original_dest = dest;
	while (*src != '\0') {
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return original_dest;
}

char *my_strncpy(char *dest, const char *src, int n) {
	char *original_dest = dest;
	int i = 0;
	while (i < n && *src != '\0') {
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return original_dest;
}

void *my_memcpy(void *dest, const void *src, size_t n) {
	char *d = (char *)dest;
	const char *s = (const char *)src;
	for (size_t i = 0; i < n; i++) {
		d[i] = s[i];
	}
	return dest;
}

void *my_memmove(void *dest, const void *src, size_t n) {
	char *d = (char *)dest;
        const char *s = (const char *)src;

	if (d == s) return dest;

	if (s < d && s + n > d) {
		for (size_t i = n; i > 0; i--) {
			d[i - 1] = s[i - 1];
	        }
	} else {
		for (size_t i = 0; i < n; i++) {
			d[i] = s[i];
		}
	}
	return dest;
}

int main() {
	char src[] = "Hello";
	char dest[10];

	printf("%s\n",(char*)my_strcpy(dest,src));
	printf("%s\n",(char*)my_strncpy(dest,src, 3));
	printf("%s\n",(char*)my_memcpy(dest,src, 3));
	printf("%s\n",(char*)my_memmove(dest,src, 3));

	return 0;
}

