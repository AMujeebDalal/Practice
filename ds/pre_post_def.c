#include<stdio.h>
int main()
{
	/* code */
	int arr[] = {10,20};
	int arr1[] = {30,40};
	int ar[] = {50,60};
	int *p = arr;
	int *q = arr1;
	int *r = ar;
	++*p;
	printf("%d & %d & %d\n",arr[0],arr[1],*p);
	*q++;
	printf("%d & %d & %d\n",arr1[0],arr1[1],*q );
	*++r;
	printf("%d & %d & %d\n",ar[0],ar[1],*r);
	return 0;
}