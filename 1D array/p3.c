//Q.3 Write a Program to find square of each element from the given array.
//For example,
//Input:
//Enter array size: 5
//
//Enter array elements:
//a[0] = 7
//a[1] = 4
//a[2] = 9
//a[3] = 5
//a[4] = 2
//
//
//Output:
//The squares are: 49, 16, 81, 25, 4//


#include<stdio.h>
main(){
	int i, arr[i],a;
	
	printf("Enter the size of arry:-");
	scanf("%d",&a);
	
	for(i=0;i<a;i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	
	printf("THE SQUARE ARE:");
	for(i=0;i<a;i++){
		printf("\n %d",arr[i]*arr[i]);
	}
}
