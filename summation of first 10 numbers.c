// program to find sum of 10 natural numbers
#include<stdio.h>
int main()
{
	int num,sum=0;
	for(num=1;num<=10;num++)
	{
		printf("%d\n",num);
		sum=sum+num;
	}
	printf("sum=%d\n",sum);
}