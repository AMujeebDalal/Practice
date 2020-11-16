#include<stdio.h>
#include<math.h>
int A[] = {1, 2, 3, 4, 5};
void bnary(int x)
{
	if (x < 0)
	{
		printf("%s\n",A );
	}
	else
	{
		A[x-1] = 0;
		bnary(x-1);
		A[x-1] = 1;
		bnary(x-1);
	}
}
int IsPrime(n)
{
	int i;
	for(i=2; i<=sqrt(n); i++)
	{
		if(n%i==0)
		{
			printf("Not prime");
		}
		return 0;
	}
	return 1;
}
int main()
{
	IsPrime(5);
	return 0;
}