#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

char *my_strcat(char *dest, char *src) {
	int i=0, j=0;
	if(src == NULL || dest == NULL) {
		return  dest;
	}
	while(dest[i] != '\0') {
		i++;
	}
	while(src[j] != '\0') {
		dest[i] = src[j];
		j++, i++;
	}
	dest[i+1] = '\0';
	return dest;
}

char *my_strncat(char *dest, char *src, int n) {
	int i=0, j=0;
	if(src == NULL || dest == NULL) {
		return  dest;
	}
	while(dest[i] != '\0') {
		i++;
	}
	while(src[j] != '\0' && n > 0) {
		dest[i] = src[j];
		j++, i++, n--;
	}
	dest[i+1] = '\0';
	return dest;
}

int my_strlcat(char *dest, const char *src, int size) {
	int dest_len = strlen(dest);
	int src_len = strlen(src);
	if (size <= dest_len) {
		return size + src_len;
	}
	if (size > dest_len) {
		strncpy(dest + dest_len, src, size - dest_len - 1);
		dest[size - 1] = '\0';
	}
	return dest_len + src_len;
}

int main() {
	char src[10], dest[50];
	int n;
	printf("Enter the Src String : ");
	scanf("%[^\n]s",src);
	__fpurge(stdin);
	printf("Enter the Dest String : ");
	scanf("%[^\n]s",dest);
	__fpurge(stdin);
	printf("Enter the No : ");
	scanf("%d",&n);

	char *output = my_strcat(dest, src);
	char *output1 = my_strncat(dest, src, n);
	int output2 = my_strlcat(dest, src, n);
	
	printf("Final String strcat() : %s\n",output);
	printf("Final String strncat() : %s\n",output1);
	printf("Final String strlcat() : %d\n",output2);

	return 0;
}
