#include <stdio.h>

#define N 5

void insertion_sort(int *arr) {
	for(int i=0; i<N; i++) {
		int j = i-1;	
		int temp = arr[i];
		while(j >= 0 && arr[j] > temp) {
			arr[j+1] = arr[j];
			j = j-1;	
		}
		arr[j+1] = temp;
	}
}

int main(void) {
	int arr[N];
	printf("Enter Elements in Array :\n");
	for(int i=0; i<N; i++) {
		printf("Arr[%d] : ",i);
		scanf("%d",arr+i);
	}
	insertion_sort(arr);
	printf("Array After Sorting : ");
	for(int i=0; i<N; i++) {
		printf(" %d ",arr[i]);
	}
	printf("\n");
	return 0;
}


