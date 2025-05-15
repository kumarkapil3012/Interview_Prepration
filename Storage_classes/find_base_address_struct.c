#include <stdio.h>

#define CONTAINER(ptr,type,member) ((type*)((char*)ptr-(char*)&(((type*)0)->member)))

//#pragma pack(1)   -> remove padding

struct MyStruct {
     int member1;
     char member2;
     double member3;
};                      // __attribute__((packed));  -> add this to remove padding

int main() {
	struct MyStruct myStruct;
	struct MyStruct *base_address;

	printf("Size With Padding : %lu\n", sizeof(myStruct));
	//printf("Size Without Padding : %lu\n", sizeof(myStruct));

	
	int *member1_address = &(myStruct.member1);
	//Calculate the offset from the beginning of the structure
//	size_t offset = offsetof(struct MyStruct, member1); 
	
	//Calculate the base address by subtracting the offset from the member's address
//	base_address = (struct MyStruct *)((char *)member1_address - offset);
	
//	printf(" %x \n", base_address);
	printf(" %p \n", CONTAINER(base_address,struct MyStruct, member2));
	printf(" %p \n", &(base_address->member1));
	printf(" %p \n", &(base_address->member2));
	printf(" %p \n", &(base_address->member3));
	return 0;
}
