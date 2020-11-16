#include<stdio.h>
int main()
{
	static int a = 5;
	for (int i = 0; i < 3; ++i)
	{
		static int b = 5;
		printf("a is %d\n",a++ );
		printf("b = %d\n",b++ );
	}
	return 0;
}