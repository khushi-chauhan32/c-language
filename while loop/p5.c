#include<stdio.h>
main() {
    int startingyear,endingyear;

    printf("Enter the first number: ");
    scanf("%d", &startingyear);

    printf("Enter the second number: ");
    scanf("%d", &endingyear);

    printf("Leap years between %d and %d are:\n", startingyear, endingyear);

   while (startingyear<=endingyear){
   	if(startingyear%4==0){
   		printf("%d",startingyear);
	   }
	   startingyear++;
	   printf("\n");
   }
   
}
