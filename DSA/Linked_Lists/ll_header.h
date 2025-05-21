#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}Node;

void insert_At_Begin(Node **);
void insert_At_End(Node **);
void insert_At_Mid(Node **);

void delete_At_Begin(Node **);
void delete_At_End(Node **);
void delete_At_Mid(Node **);

void display(Node *);
void free_All(Node **);
