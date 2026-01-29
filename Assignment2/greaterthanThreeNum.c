#include<stdio.h>
int main(){
	//Which number is greater than three numbers
	int num1,num2,num3;
	printf("Enter three numbers = ");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	if(num1>num2&&num1>num3){
		printf("Num1 is greater");
	}else if(num2>num1&&num2>num3){
		printf("Num2 is greater");
	}else{
		printf("Num3 is greater");
	}
}
