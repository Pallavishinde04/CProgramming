#include<stdio.h>
int main(){
	//Check given number is prime or not Input:7
	
	int i=2,num=7;
	while(i<=num){
		if(i%2==0){
			printf("Prime number");
		}else{
			printf("Not prime number");
		}
		i++;
	} 	
}
