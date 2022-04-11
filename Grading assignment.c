//program of displaying grades
#include<stdio.h>
int main()
{
	int mat,chem,phy,avg;
	printf("enter the markks for mat,chem and phy: \n");
	scanf("%d %d %d",&mat,&chem,&phy);
	avg=(mat+chem+phy)/3;
	printf("\n the average score is %d \n",avg);
	if(avg>100)
	{
		printf("must be between 0 and 100");
	}
	else if(avg<0)
	{
		printf("should be between 0 and 100");
	}
	else if(avg>=70 && avg<=100)
	{
		printf("grade A");
	}
	else if(avg>=60 && avg<=69)
	{
		printf("grade B");
	}
	else if(avg>=50 && avg<=59)
	{
		printf("grade C");
	}
	else if(avg>=40 && avg<=49)
	{
		printf("grade D");
	}
	else
	{
		printf("grade E");
	}
	return 0;
		
	
}