//Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array.
//For example,
//Input:
//Enter the first number: 2020
//
//Enter the second number: 2040
//
//Output:
//The array is: 2020, 2024, 2028, 2032, 2036, 2040//




#include<stdio.h>
 main(){
	int s,e,i,arr[i];
	printf("Enter starting year:-");
	scanf("%d",&s);//2020
	
	printf("Enter ending year:-");
	scanf("%d",&e);//2040
	
	for(arr[i]=s; arr[i]<=e; arr[i]++){
		if(arr[i] % 4== 0){
			printf("%d,",arr[i]);
		}
	}
}

