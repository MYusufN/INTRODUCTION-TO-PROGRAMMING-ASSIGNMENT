//program to find cube of five numbers
#include<stdio.h>
#include<math.h>
int main()
{
	int num1,num2,num3,num4,num5,cube;
	printf("enter any five numbers:\n");
	scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
	if(num1)
	{
		cube=num1*num1*num1;
		printf("the number is %d: and the cube of %d is %d \n",num1,num1,cube);
	}
	if(num2)
	{
		cube=num2*num2*num2;
		printf("the number is %d: and the cube of %d is %d \n",num2,num2,cube);
	}
	if(num3)
	{
		cube=num3*num3*num3;
		printf("the number is %d: and the cube of %d is %d \n",num3,num3,cube);
	}
	if(num4)
	{
		cube=num4*num4*num4;
		printf("the number is %d: and the cube of %d is %d \n",num4,num4,num4);
	}
	if(num5)
	{
		cube=num5*num5*num5;
		printf("the number is %d: and the cube of %d is %d \n",num5,num5,num5);
	}
	else
	{
		printf("invalid cube");
	}
	return 0;
}