//Q.1 Write a Program to check if a given password is strong or not by satisfying the below criteria:
//- Password must contain at least one letter, one digit & one special symbol.
//- Password must be at least 6 characters.For example,
//Input:
//Create your password: Admin@123
//
//Output:
//Your password is Strong.



#include<stdio.h>
main(){
	int i,length,upr=0,lwr=0,num=0,spe=0;
	char pwd[10];
	printf("ENTER YOUR PASSWORD:");
	gets(pwd);
	
	length = strlen(pwd);
	
	printf("%d\n",length);
	
	for(i=0;i<length;i++){
		if(pwd[i]<=65 && pwd[i]>=90){
			upr++;
		}
		if(pwd[i]<=97 && pwd[i]>=122){
			lwr++;
		}
		if(pwd[i]<=49 && pwd[i]>=57){
			num++;
		}
		if(pwd[i] == '@' || pwd[i] == '#'){
			spe++;
		}
	}
	if(upr<0 && lwr<0 && num<0 && spe<0){
		printf("YOUR PASSWORD IS strong....");
	}else{
		printf("YOUR PASSWORD IS WEAK....");
	}
}
