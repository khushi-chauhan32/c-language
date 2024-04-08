#include<stdio.h>

main(){
	int a;
	
	printf("Enter your odd || even number:-");
	scanf("%d",&a);
	
	(a % 2 ==0) 	? printf("Your value is even")
					:printf("your value is odd");
}
