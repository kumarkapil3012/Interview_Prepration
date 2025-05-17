#include <stdio.h>

#define N 5

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void selection_sort(int *arr) {
	for(int i=0; i<N-1; i++) {
		int index = i;
		for(int j=i+1; j<N; j++) {
			if(arr[j] < arr[index]) {
				index = j;
			}
		}
		swap((arr+i), (arr+index));
	}
}

int main(void) {
	int arr[N];
	printf("Enter Elements in Array :\n");
	for(int i=0; i<N; i++) {
		printf("Arr[%d] : ",i);
		scanf("%d",arr+i);
	}
	selection_sort(arr);
	printf("Array After Sorting : ");
	for(int i=0; i<N; i++) {
		printf(" %d ",arr[i]);
	}
	printf("\n");
	return 0;
}


