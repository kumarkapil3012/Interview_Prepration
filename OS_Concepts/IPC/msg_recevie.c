#include "my_header.h"

struct msgbuf{
	long mtype;
	char data[20];
};

int main(int argc, char **argv) {
	int id;
	struct msgbuf v;
	
	id = msgget(3, IPC_CREAT | 0666);
	perror("msgget");


	printf("Before Receiving the message : Id = %d\n",id);

	msgrcv(id, &v, 20, 2, 0);

	printf("Data : %s\n",v.data);
	return 0;
}
