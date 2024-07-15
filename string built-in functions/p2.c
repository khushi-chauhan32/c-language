//Q.2 Write a Program to create a login mechanism by entering the right email & password. You can compare it with your desired email & password.
//For example,
//Input:
//Enter your email: admin@gmail.com
//Enter your password: 123456
//
//Output:
//Login Successful...



#include<stdio.h>
main(){
	char email[40];
	char password[40];
	
	// Desired email and password for comparison 
	
	char desired_email[]="admin@gmail.com";
	char desired_password[]="123456";
	
	printf("ENTER YOUR EMAIL:");
	scanf("%s",email);
	
	printf("ENTER YOUR PASSWORD:");
	scanf("%s",password);
	
	// compared entered email and password with desired ones
	
	if(strcmp(email,desired_email)==0 && strcmp(password,desired_password)==0){
		printf("LOGIN SUCCESSFUL....\n");
	}else{
		printf("LOGIN FAILED. INVALID CREDENTIALS.....");
	}
}
