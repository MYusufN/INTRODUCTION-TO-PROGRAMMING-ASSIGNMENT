//program to sum 1 to 10
#include <stdio.h>
int main()
{
	int a,sum=0;
	for(a=1;a<=10;a++)
	{
		printf("%d\n",a);
		sum=sum+a;
	}
	printf("sum=%d\n",sum);
}