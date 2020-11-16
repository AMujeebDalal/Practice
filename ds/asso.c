#include<stdio.h>
int f1()
{
	int x = 10;
	return x;
}
int f2()
{
	int x = 100;
	return x;
}
int main()
{
	/* code */
	int a,op;
	a = 1;
	printf("%d\n",f1()+f2());
	op = a++;
	printf("%d, %d and %d\n", ++a, op, a++);
	return 0;
}