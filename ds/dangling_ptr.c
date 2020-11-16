#include<stdio.h>
#include<stdlib.h>
int *fun()
{
	/*x is local variable and goes out of scope 
	after execution of fun() is over*/
	static int x =5;
	return &x;
}
int main()
{
	// 1. Due to memory deallocation
	int *ptr = (int*) malloc (sizeof(int));
	free(ptr); //dangling due to deallocation
	ptr = NULL; //No dangling
	// 2. Function call
	int *p =fun();
	fflush(stdin);
	/*p points to something not valid anymore
	so x should be declared as static else p will
	become dangling*/
	printf("%d\n",*p);
	/*3. Variable goes out of scope
	can reference void pointer only using typecasting*/
	return 0;
}