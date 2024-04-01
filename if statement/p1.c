#include<stdio.h>

main(){
	int a;
	printf("Enter number for check even||odd :");
	scanf("%d",&a);
	
	if(a % 2 == 0){
		printf("your value is even");
	}
	else{
		printf("your value is odd");
	}
}
