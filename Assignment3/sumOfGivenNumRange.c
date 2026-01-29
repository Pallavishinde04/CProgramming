#include<stdio.h>
int main(){
	//sum of numbers in given range Input: start=1, end=5;
	int i=1, n=5,sum=0;
	while(i<=n){
		sum=sum+i;
		i++;
	}
	printf("Sum is = %d",sum);
	
}
