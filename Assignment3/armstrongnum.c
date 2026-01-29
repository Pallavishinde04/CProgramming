#include<stdio.h>
int main(){
	
	//Check given number is armstrong or not Input:153;
	int num=1766,original,count=0,digit,sum=0,temp;
	original=num;
	while(num!=0){
		count++;
		num=num/10;
	}
	while(num!=0){
		digit=num%10;
		sum=sum+digit*count;
		num=num/10;
	}
	if(sum==original){
		printf("Armstrong");
	}else{
		printf("Not Armstrong");
	}
}
