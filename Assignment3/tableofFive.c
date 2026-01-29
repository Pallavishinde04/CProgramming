#include<stdio.h>
int main(){
	//Print table for given number n=5
	int i=1,n=5;
	printf("Enter a number = ");
	scanf("%d",&n);
	
	while(i<=10){
		printf("%d\n",i*n);
		i++;
	}
}
