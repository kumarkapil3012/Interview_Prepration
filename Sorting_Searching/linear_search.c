#include <stdio.h>

#define SIZE 10

void search(int *arr, int size, int num) {
	for(int i=0; i<size; i++) {
		if(arr[i] == num) {
			printf("Number Found on index : %d\n",i);
			return ;
		}
	}
	printf("Number not Found \n");
}

void input(int *arr, int size) {
	for(int i=0; i<size; i++) {
		printf("Enter %d num : ",i);
		scanf("%d",arr+i);
	}
}

void display(int *arr, int size) {
	for(int i=0; i<size; i++) {
		printf("%d  ",*(arr+i));
	}
	printf("\n");
}

int main() {
	int arr[SIZE],size, num;
	printf("Enter Size of array <=10 : ");
	scanf("%d",&size);

	input(arr,size);
	
	printf("Enter Number : ");
	scanf("%d",&num);

	display(arr,size);
	search(arr,size, num);
	
	return 0;
}


