#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num,i=0;
	do
	{
		printf("To enter press 1\n" );
		printf("To exit press 2\n" );
		scanf("%d",&num);
		++i;
		switch(num)
		{
			case 1: printf("You are Welcome");
			default : exit(0);
		} 
	}while(i<=10);
	
	return 0;
}