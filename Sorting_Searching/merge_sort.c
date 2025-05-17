#include <stdio.h>

#define N 5

void merge_array(int *arr, int start, int mid, int end) {
	int a1 = mid-start+1;
	int b1 = end - mid; 
	int i=0, j=0 ,k=start;

	int temp1[a1], temp2[b1];

	for(i=0; i<a1; i++) {
		temp1[i] = arr[start+i];
	}
	for(i=0; i<b1; i++) {
		temp2[i] = arr[mid+1+i];
	}
	i=0;
	while(i < a1 && j<b1) {
		if(temp1[i] <= temp2[j]) {
			arr[k] = temp1[i];
			i++;
		} else {
			arr[k] = temp2[j];
			j++;
		}
		k++;
	}

	while(i < a1) {
		arr[k] = temp1[i];
		i++;
	      	k++;
	}
	while(j < b1) {
		arr[k] = temp2[j];
		j++;
	      	k++;
	}
}

void merge_sort(int *arr, int start, int end) {
	if(start < end) {
		int mid = start + (end-start)/2;

		merge_sort(arr, start, mid);
		merge_sort(arr, mid+1, end);

		merge_array(arr, start, mid, end);
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

	merge_sort(arr, 0, N-1);
	printf("Array After Sorting : \n");
	display(arr);

	return 0;
}

