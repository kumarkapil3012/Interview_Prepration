#include <stdio.h>
#include <stdio_ext.h>

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

int main() {
	char src[10], dest[20];
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
	
	printf("Final String strcat() : %s\n",output);
	printf("Final String strncat() : %s\n",output1);

	return 0;
}
