#include <stdio.h>

int my_strlcpy(char *dest, const char *src, int size) {
	int src_len = 0;
	while (src[src_len] != '\0') {
		src_len++;
	}

	if (size > 0) {
		int i = 0;
		while (i < size - 1 && src[i] != '\0') {
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0'; 
        }
	return src_len;
}

int main() {
	char src[20], dest[20];
	int size;
	printf("Enter String : ");
	scanf("%s",src);

	printf("Enter Length : ");
	scanf("%d",&size);

	int len = my_strlcpy(dest,src,size);

	printf("String src : %s == dest : %s\n",src, dest );
	printf("String Length : %d\n",len);

	return 0;
}
