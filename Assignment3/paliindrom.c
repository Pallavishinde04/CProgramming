#include<stdio.h>
int main(){
	//Cheack given number is Palindrome or not Intput: 153
	int num=12121,original,digit,reverse=0;
	
	original=num;
	
	while(num!=0){
		digit=num%10;
		reverse=reverse*10+digit;
		num=num/10;
	}
	if(original==reverse){
			printf("Palindrome");
		}else{
			printf("Not palindrome");
		}
}
