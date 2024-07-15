//Q.1 Write a Program to find all the negative elements from a given 1D array.
//For example,
//Input:
//Enter the array's size: 5
//
//Enter array's elements:
//a[0] = 2
//a[1] = -4
//a[2] = 1
//a[3] = -3
//a[4] = -5
//
//Output:
//Negative elements from an Array: -4, -3, -5//



#include<stdio.h>

main(){
	
	int n;
	printf("Enter this size of array: ");
	scanf("%d",&n);
	int arr[n],i;
	
	for(i=0;i<n;i++){
		printf("arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("the negative elements are: ");
	for(i=0;i<n;i++){
		if(arr[i]<0)
		{
			printf("%d ", arr[i]);
		}
	}
}
