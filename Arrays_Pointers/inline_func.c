#include <stdio.h>

/*
	1.  GCC implements inline functions as a part of optimization. When inline is used for a function in a C source file and compiled without any optimization flag, it throws an error
	   ->	Need to execute with optimization level
	   ->  gcc solution.c -o solution -O1
	
	2. With Static no need to add optimization flag
	   ->  This forces the compiler to treat the function with internal linkage and ensures that it is considered during the linking process, allowing the program to compile and run successfully. Though the inlining still depends on the compiler’s optimization level.
	
	3.  Extern Inline Function
           ->  If the function is defined with external linkage, then the compiler will try to find its definition in other translation units. If found, inlining will still depend on the optimization flag. But the function will be executed in both cases. It will not throw an error.
	
	4.  Inline with Forward Declaration
	   -> If the function is declared separately, then it will be added to the symbol table. Later on, it can be defined as inline, and the compiler will consider it for inlining if the optimization level is O1 or above. But if the optimization is O0, then this function will not be inlined but still will be able to be executed as a normal function

	   	// Forward declaration
	   	 int foo();
	   
	   	// Inline function in C
	   	inline int foo() {
	        	return 2;
		}

*/
static inline int foo() {
	return 2;
}

int main() {
	int res;
	res = foo();
	printf("%d\n", res);
	return 0;
}
