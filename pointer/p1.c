//Q.1 Write a program to print another varibale value and address using pointer concept.
//For example,
//Input:
//Enter the any number : 5
//
//Output:
//A     :  5
//PTR  : 5
//
//Address of A: 20105064
//PTR  Store Address : 20105064

#include<stdio.h>

void main(){
	
	int a=5;
	int *ptr;
	
  	ptr=&a;
	
	printf("A\t:%d\n",a);
	printf("PTR\t:%d\n\n",*ptr);
	
	printf("adress of A\t:%u\n\n",&a);
	printf("PTR adress\t:%u",ptr);
	
	
}
