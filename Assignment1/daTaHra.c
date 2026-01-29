#include<stdio.h>{
	/*Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30%
respectively.*/

	float basic,da,ta,hra,total;
	
	printf("Enter Basic salary = ");
	scanf("%f",&basic);
		if(basic<=5000){
		da=basic*10/100;
		ta=basic*20/100;
		hra=basic*25/100;
	}else{
		da=basic*15/100;
		ta=basic*25/100;
		hra=basic*30/100;
	}
	
	total = basic+da+ta+hra;
	
	printf("\nBasic salary = %.2f",basic);
	printf("\nda = %.2f",da);
	printf("\nta = %.2f",ta);
	printf("\nhra = %.2f",hra);
	printf("\ntotal = %.2f",total);
	}	
}
