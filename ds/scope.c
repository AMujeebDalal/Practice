#include <stdio.h>
int count1 = 50;
int count2 = 100;
int count3 = 500;
void fun1()
{
	printf("In fun1 c1 = %d\n",count1 );
	printf("In fun1 c2 = %d\n",count2 );
}
void fun2()
{
	int count1 = 20;
	fun1();
}
void fun3()
{
	count2 = 20;
	fun2();
}
int main()
{
	int count3 = 200;
	fun3();
	printf("%d\n",count3);
	return 0;
}