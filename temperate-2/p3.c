#include<stdio.h>
main(){
	
	int first, last, a, ans;
	
	printf("Enter your number:");
	scanf("%d",&a);
	
	last= a % 10;
	do{
		first= a % 10;
		a = a/10;
	}
	while(a>0);
	
	printf("first number:%d\n",first);
	printf("last number:%d\n",last);
	
	ans= first + last;
	printf("additon of %d + %d is:%d\n",first,last,ans);
}
