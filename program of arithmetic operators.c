//program to demonstrate usage of arithmetic operators
#include<stdio.h>
int main()
{
	int a,b,sum,diff,mul,div,rem;
	printf("enter two number \n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	diff=a-b;
	mul=a*b;
	div=a/b;
	rem=a%b;
	printf("addition is %d\n",sum);
	printf("subtraction is %d\n",diff);
	printf("multiplication is %d\n",mul);
	printf("division is %d\n",div);
	printf("remainder is %d",rem);
	return 0;
}