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


int main() {
	char src[10], dest[20];
	printf("Enter the Src String : ");
	scanf("%[^\n]s",src);
	__fpurge(stdin);
	printf("Enter the Dest String : ");
	scanf("%[^\n]s",dest);
	__fpurge(stdin);

	char *output = my_strcat(dest, src);

	printf("Final String : %s\n",output);

	return 0;
}
