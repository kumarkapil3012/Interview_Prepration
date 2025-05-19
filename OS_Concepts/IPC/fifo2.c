#include "my_header.h"

int main() {
	int fd, fd1;
	char a[20];

	mkfifo("f1", 0666);
	perror("mkfifo");
	mkfifo("f2",0666);
	perror("mkfifo");

	fd =  open("f1", O_RDWR);
	fd1 =  open("f2", O_RDWR);
	
	printf("PID = %d\n",getpid());

	if(fork() == 0) {
		while(1) {
			read(fd, a, sizeof(a));
			printf("Data : %s\n", a);
		}
	}
	else {
		while(1) {	
			printf("Enter the data :\n");
			scanf("%s",a);
			write(fd1, a, strlen(a)+1);
		}
	}
	return 0;
}

