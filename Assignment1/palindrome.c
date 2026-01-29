#include<stdio.h>{
		//Given number is palindrom or not
	int p,first,last;
	printf("\nEnter a palindrome = ");
	scanf("%d",&p);
	
	first = p/100;
	last = p%10;
	
	if(first == last){
		printf("Palindrome");
	}else{
		printf("Not palindrome");
	}
}
