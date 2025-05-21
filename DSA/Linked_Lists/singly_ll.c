#include "ll_header.h"

void insert_At_Begin(Node **head) {
	Node *temp = (Node *)malloc(sizeof(Node)) ;
	if(temp == NULL) {
		perror("Malloc Failed");
		return ;
	}
	temp->next = NULL;
	printf("Enter Data :");
	scanf("%d",&temp->data);

	if(*head == NULL) {
		*head = temp;
		return ;
	}
	else {
		temp->next = *head;
		*head = temp;
	}
	printf("Node Inserted Sucessfull\n");
}

void insert_At_End(Node **head) {
	Node *temp = (Node *)malloc(sizeof(Node)) ;
	if(temp == NULL) {
		perror("Malloc Failed");
		return ;
	}
	temp->next = NULL;
	printf("Enter Data :");
	scanf("%d",&temp->data);

	if(*head == NULL) {
		*head = temp;
		return ;
	}
	else {	
		Node *t1 = *head;
		while(t1->next != NULL) {
			t1 = t1->next;
		}
		t1->next = temp;
	}
	printf("Node Inserted Sucessfull\n");

}

void insert_At_Mid(Node **head) {
	int index;
	printf("Enter Index : ");
	scanf("%d",&index);
	if(index == 1 || index == 0) {
		insert_At_Begin(head);
	} else {
		int i = 1;
		Node *temp = (Node *)malloc(sizeof(Node)) ;
		if(temp == NULL) {
			perror("Malloc Failed");
			return ;
		}
		temp->next = NULL;
		printf("Enter Data : ");
		scanf("%d",&temp->data);
		
		Node *t1 = *head;
		while(i < index-1 && t1 != NULL) {
			t1 = t1->next;
			i++;
		}
		if(t1 == NULL) {
			return ;
		}
		temp->next = t1->next;
		t1->next = temp;
	}
	printf("Node Inserted Succesfully !!\n");
}

void delete_At_Begin(Node **head) {
	if(*head == NULL) {
		printf("No node exists !!\n");
		return ;
	}
	if((*head)->next == NULL) {
		free(*head);
		*head = NULL;
	}
	else {
		Node *temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	printf("Node Deleted Successfull !!\n");
}

void delete_At_End(Node **head) {
	if(*head == NULL) {
		printf("No node exists !!\n");
		return ;
	}
	if((*head)->next == NULL) {
		free(*head);
		*head = NULL;
	}
	else {
		Node *temp1,*temp = *head;
		while(temp->next != NULL) {
			temp1 = temp;
			temp = temp->next;
		}
		temp1->next = NULL;
		free(temp);
	}
	printf("Node Deleted Successfull !!\n");

}

void delete_At_Mid(Node **head) {
	Node* temp = *head;
	Node* prev = NULL;

	// Base case if linked list is empty
	if (temp == NULL)
		return;
	int position;
	printf("Enter Position : ");
	scanf("%d",&position);

	// Case 1: Head is to be deleted
        if (position == 1 || position == 0 ) {
		*head = temp->next;
		free(temp);
        	printf("Node deleted successfull !!\n");
                return ;
	}
	
	// Case 2: Node to be deleted is in middle
	// Traverse till given position
	for (int i = 1; temp != NULL && i < position; i++) {
		prev = temp;
	        temp = temp->next;
	}
	
	// If given position is found, delete node
	if (temp != NULL) {
		prev->next = temp->next;
	        free(temp);
	}
	else {
		printf("Data not present\n");
		return ;
        }
        printf("Node deleted successfull !!\n");
}

void display(Node *head) {
	if(head == NULL) {
		printf("No node exists!!\n");
		return ;
	}
	while(head != NULL) {
		printf("%d ->",head->data);
		head = head->next;
	}
	printf("\n");
}

void free_All(Node **head) {
	if(*head == NULL) {
		return;
	}
	Node *temp = *head;
	while(*head != NULL) {
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
