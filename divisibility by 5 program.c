//program that determine whether a number is divisible by 5
#include <stdio.h>
int main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if(num%5==0)
	{
		printf("the number is divisble by 5");
	}
	else
	{
		printf("the number is not divible by 5");
	}
}