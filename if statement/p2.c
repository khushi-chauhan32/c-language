#include<stdio.h>

main(){
	int a;
	printf("Enter your positive || negative || zero number");
	scanf("%d",&a);
	
	if(a > 0){
		printf("your number is positive");
	}
	else if(a < 0){
		printf("your number is negative");
	}
	else{
		printf("your number is null");
	}
	
}
