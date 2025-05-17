#include <stdio.h>
#include <stdbool.h>

#define N 5

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int *arr) {
	bool flag = false;
	for(int i=0; i<N-1; i++) {
		for(int j=0; j<N-1-i; j++) {
			if(arr[j] > arr[j+1]) {
				swap((arr+j), (arr+j+1));
				flag = true;
			}
		}
		if(!flag) {
			printf("Array is sorted !!\n");
			return;
		}
	}
}

int main(void) {
	int arr[N];
	printf("Enter Elements in Array :\n");
	for(int i=0; i<N; i++) {
		printf("Arr[%d] : ",i);
		scanf("%d",arr+i);
	}
	bubble_sort(arr);
	printf("Array After Sorting : ");
	for(int i=0; i<N; i++) {
		printf(" %d ",arr[i]);
	}
	printf("\n");
	return 0;
}


