#include "my_header.h"

int main() {
	char *ptr;
	int id;

	id = shmget(2, 50 , IPC_CREAT | 0666);
	perror("shmget");

	ptr = shmat(id, 0, 0);
	printf("Data : %s\n",ptr);
	
	return 0;
}
