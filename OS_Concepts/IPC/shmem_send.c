#include "my_header.h"

int main() {
	int id;
	char *ptr;

	id = shmget(2, 50 , IPC_CREAT | 0666);
	perror("shmget");

	ptr = shmat(id, 0, 0);
	printf("Enter the Data : ");
	scanf("%[^\n]s",ptr);
	
	return 0;
}
