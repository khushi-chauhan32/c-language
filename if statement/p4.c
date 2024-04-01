#include<stdio.h>

main(){
	int a;
	printf("Enter your age");
	scanf("%d",&a);
	
	if(a<12){
		printf("you are a younger");
	}
	else if(a<=19){
		printf("you are a teenager");
	}
	else if(a<=64){
		printf("you are a adult ");
	}	
	else{
		printf("you are a senior");
	}
}
