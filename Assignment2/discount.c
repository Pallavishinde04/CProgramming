#include<stdio.h>
int main(){
	int price;
	float discount=0,final_price;
	char student;
	
	printf("Enter student = ");
	scanf(" %c",&student);
	
	printf("Enter the price = ");
	scanf("%d",&price);
	
	if(student=='Y'||student=='y'){
		if(price>500){
			discount=price*20/100.0;
		}else {
			discount=price*10/100.0;
		}
	}else{
			if(price>600){
				discount=price*15/100;
			}else{
				discount=0;
			}
		}
		final_price = price - discount;
	
	printf("Discount is = %.2f",discount);
	printf("Final price is = %.2f",final_price);
	
}
