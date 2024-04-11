#include<stdio.h>
main(){
	
	int a,n=0;
	
	printf("Enter the no of a:");
	scanf("%d",&a);
	
	do{
		a/=10;
		n++;
	}
	while(a|=0);
	printf("%d",n);
}
