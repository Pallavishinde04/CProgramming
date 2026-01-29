#include<stdio.h>
int main(){
	//accept two numbers & perform operations based on arithmatic operators
	int a,b;
	printf("\nEnter two numbers:");
	scanf("%d%d",&a,&b);
	
	char choice;
	printf("Enter choice: ");
	scanf(" %c",&choice);
	
	if(choice=='+'){
		printf("Addition is:%d",a+b);
	}else if(choice=='-'){
		printf("Subtraction is:%d",a-b);
	}else if(choice=='*'){
		printf("Multiplication is:%d",a*b);
	}else{
		printf("Division is:%d",a/b);
	}
}
