//program to show whether a number is positive or negative
#include <stdio.h>
int main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if(num>=0)
	{
		printf("the number is positive");
	}
	if(num<0)
	{
		printf("the number is negative");
	}
}
