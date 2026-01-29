#include<stdio.h>
int main(){
	int num;
	printf("Enter num = ");
	scanf("%d",&num);
	
	if(num%3==0||num%5!=0){
		printf("Divisible by 3");
	}else if(num%5==0||num%3!=0){
		printf("Divisible by 5");
	}else if(num%5==0&&num%3==0){
		printf("Divisible by both");
	}else{
		printf("Not divisible by both");
	}
}

