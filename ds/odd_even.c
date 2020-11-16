#include <stdio.h>
int main()
{
	int x;
	printf("Give number:\n");
	scanf("%d",&x);
	if(x<=0)
	{
		printf("Enter +ve num");
	}
	else
	{
		(x & 1)?printf("Odd\n"):printf("Even\n");
	}
return 0;	
}