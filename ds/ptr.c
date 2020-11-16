#include <stdio.h>
int main()
{
	int i=10,j=20,k=30;
	const int *ptr = &i;
	const int *const p = &j;
	char arr[] = "madeeasy";
	char *pt = arr;
	char *ppt = arr;
	++*pt;
	*ppt++;
	printf("%c\n",*pt);
	printf("%c\n",*ppt );
	printf("%d\n",*ptr );
	//*ptr = 200;error: assignment of read-only location ‘*ptr’
	ptr = &j;
	printf("%d\n",*ptr );
	//p = &k;  (error: assignment of read-only variable ‘p’)
	return 0;
}