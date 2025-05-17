#include <stdio.h>

#define SIZE 10

void binary_search(int *arr, int size, int num) {
	int start = 0, end = size;
	while(start < end) {
		int mid = start + (end - start) /2;
		if(arr[mid] == num) {
			printf("Number Found on index : %d\n",mid);
			return ;
		}
		else if(arr[mid] > num) {
			end = mid - 1;
		}
		else {
			start = mid + 1;
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
	binary_search(arr,size, num);
	
	return 0;
}


