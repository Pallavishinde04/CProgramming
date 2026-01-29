#include<stdio.h>
int main(){
	//Check weather the triangle is Equilateral,Isockeles,scalene
   int num1,num2,num3;
	printf("Enter num1,num2,num3 = ");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	if(num1==num2&&num2==num3){
		printf("Equilateral");
	}else if(num1==num2||num1==num3||num2==num3){
		printf("Isosceles");
	}else{
		printf("Scalene");
	}
}
