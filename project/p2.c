#include<stdio.h>

main(){
	
	float hra,da,ta;
	int gross_salary,salary;
	printf("Enter Your salary");
	scanf("%d",&salary);
	printf("Enter hra");
	scanf("%f",&hra);
	printf("Enter da");
	scanf("%f",&da);
	printf("Enter ta");
	scanf("%f",&ta);
	gross_salary=salary+(salary*hra/100)+(salary*da/100)+(salary*ta/100);
	printf("gross_salary: %d",gross_salary);
	
	  
}
