#include "ll_header.h"


int main() {
	Node *head = NULL;
	int choice;

	while(1) {
		printf("Enter Choice :\n1. Insert the element at the beginning\n2. Insert the element in the end\n3. Insert the element at the Position\n4. Delete the first node\n5. Delete the end node\n6. Delete the Position node\n7. Display \n8. Exit : ");
		scanf("%d",&choice);

		switch(choice) {
			case 1:
				insert_At_Begin(&head);
				break;
			case 2:
				insert_At_End(&head);
				break;
			case 3:
				insert_At_Mid(&head);
				break;
			case 4:
				delete_At_Begin(&head);
				break;
			case 5:
				delete_At_End(&head);
				break;
			case 6:
				delete_At_Mid(&head);
				break;
			case 7:
				display(head);
				break;
			case 8:
				free_All(&head);
				return 0;
			deafult:
				printf("Please enter valid choice!!\n");
		}
	}
	return 0;
}

