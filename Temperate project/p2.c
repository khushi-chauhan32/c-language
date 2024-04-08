#include<stdio.h>

main(){
	int choice;
	
	printf("Enter your choice:-");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("sunday");
		break;
		case 2:
			printf("monday");
		break;
		case 3:
			printf("tuesday");
		break;
		case 4:
			printf("wednesday");
		break;
		case 5:
			printf("thurseday");
		break;
		case 6:
			printf("friday");
		break;
		case 7:
			printf("satureday");
		break;
		default:
			printf("Enter your valid day");
		
	}
}
