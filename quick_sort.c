#include <stdio.h>

#define N 5

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *arr, int start, int end) {
	int i = start -1;
	int pivot = arr[end];
	
	for(int j=start; j<end; j++) {
		if(arr[j] < pivot) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1],&arr[end]);
	return i+1;
}

void quick_sort(int *arr, int start, int end) {
	if(start < end) {
		int pivot = partition(arr, start, end);

		quick_sort(arr, start, pivot-1);
		quick_sort(arr, pivot+1, end);
	}
}

void input(int *arr) {
	for(int i=0; i<N; i++) {
		printf("Arr[%d] : ",i);
		scanf("%d",arr+i);
	}
}

void display(int *arr) {
	for(int i=0; i<N; i++) {
		printf("Arr[%d] : %d\n",i, *(arr+i));
	}
}

int main() {
	int arr[N];
	printf("Enter Array Elements : \n");
	input(arr);

	quick_sort(arr, 0, N-1);
	printf("Array After Sorting : \n");
	display(arr);

	return 0;
}

