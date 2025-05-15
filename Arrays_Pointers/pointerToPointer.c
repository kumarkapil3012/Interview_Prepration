#include <stdio.h>

int main() {
	int a = 20;

	int *p = &a;

	int **q = &p;

	int ***r = &q;

	int ****s = &r;

	printf("Value of a %d : %d : %d : %d : %d\n",a, *p, **q, ***r, ****s);
	printf("Address of a %p : %p : %p : %p : %p\n",&a, p, *q, **r, ***s);
	printf("Address of p %p : %p : %p : %p\n", &p, q, *r, **s);
	printf("Address of q %p : %p : %p\n",&q, r, *s);
	printf("Address of r %p : %p\n", &r, *s);
	printf("Address of s %p\n", &s);

	int arr[2][4] = {{1,2,3,4},
			{5,6,7,8}};
	int *ptr[5] ; // Array of pointers -> (stores addresses of integer type) -> ptr is a array of integer pointers whose size is 5
	int (*ptr1)[4] ; // pointer to array -> (store address of integer array) -> ptr1 is a pointer to array of intergers whose size is 4
	
	int *pt = (int *)arr;
	ptr1 = arr;

	
	printf("Value of pt : %d : %d\n",*pt, *(pt+1));  // print value 1,2
	printf("Value of ptr1 : %d : %d : %d\n",**ptr1,*((*ptr1)+1),**(ptr1+1));  // print value 1,2,5
							 
	
	return 0;
}

