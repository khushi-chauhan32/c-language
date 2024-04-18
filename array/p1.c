#include<stdio.h>

main(){
	int a,sum=0;
	
	printf("enter your value:");
	scanf("%d",&a);
	
	int arr[a],i;
	
	for(i=0;i<a;i++){
		printf("arr[%d]=",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<a;i++){
		printf("\n%d",arr[i]);
		sum=sum+arr[i];
	}
	printf("\n\n%d",sum);
	
	int avg=sum/a;
	printf("\n\n\n%d",avg);
}
