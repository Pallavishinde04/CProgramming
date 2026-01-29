#include<stdio.h>
int main(){
	//Given character is uppercase or lowercase
	char ch = 'a';
	if(ch >= 'A' && ch <='Z'){
		printf("uppercase");
	}else{
		printf("lowercase");
	}
}
