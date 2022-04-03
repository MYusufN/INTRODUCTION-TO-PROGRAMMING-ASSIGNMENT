#include<stdio.h>
#include<math.h>
int main(){
	int amount,discount;
	printf("Enter the amount");
	scanf("%d",&amount);
	if(amount>1000){
		discount=(amount*0.1);
		printf("Your discount is %d",discount);
		
	}else{
		printf("Your amount is below 1000, you don't qualify for a discount");
	}
	return 0;
}