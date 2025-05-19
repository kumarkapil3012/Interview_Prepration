#include "my_header.h"

int main() {
	int p[2], ret;

	ret = pipe(p);
	if(ret <0) {
		perror("pipe");
		return -1;
	}
	printf("p[0] = %d: p[1] = %d\n",p[0], p[1]);

	if(fork() == 0) {
		while(1) {
			sleep(1);
			char b[20];
			printf("Before Reading in child... \n");
			read(p[0], b, 20);
			printf("After Reading in child : %s\n",b);
		}
	}
	else {
		while(1) {
			sleep(2);
			char a[20];
			printf("Enter the data : \n");
			scanf("%s",a);
			write(p[1], a, strlen(a)+1);
		}
	}

	return 0;
}
