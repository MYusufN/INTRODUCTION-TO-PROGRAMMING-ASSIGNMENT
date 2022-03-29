//program that accept two integers from user and calculate product
#include<stdio.h>
int main()
{
	int a;
	int b;
	int product;
	printf("enter the first number \n");
	scanf("%d", &a);
	printf("enter the second number \n");
	scanf("%d", &b);
	product=(a*b);
	printf ("the product is %d",product);
	return 0;
	
}