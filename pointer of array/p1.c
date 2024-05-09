//Q.1 Write a Program to find the square of each element of a given 1D array using a Pointer.
//For example,
//Input:
//Enter the array's size: 5
//
//Enter array's elements:
//a[0] = 2
//a[1] = 4
//a[2] = 1
//a[3] = 3
//a[4] = 7
//
//Output:
//Square of each element:
//4, 16, 1, 9, 49

#include<stdio.h>

void main(){
	
	int size;
	
	printf("enter number of elements:");
	scanf("%d",&size);
	int a[size];
	int *ptr[size];
	int i;
	for(i=0;i<size;i++)
		ptr[i]=&a[i];
		
	printf("\n\n Array input\n\n");
	
	for(i=0;i<size;i++){
		printf("enter elements %d:",i+1);
		scanf("%d",&a[i]);

	}
	printf("\n\n array multi\n\n");
	for(i=0;i<size;i++){
		int multi=*ptr[i]* *ptr[i];
		printf("%d\t",multi);
	}
	
}
