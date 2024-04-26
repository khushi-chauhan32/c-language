//Q.3 Write a Program to convert the given name in string and sum the number of string assci value.
//For example,
//Input:
//Enter your name :Hello
//
//
//Output:
//
//Ascci Value of H is 72
//Ascci Value of e is 101
//Ascci Value of l is 108
//Ascci Value of l is 108
//Ascci Value of o is 111
//sum is  = 500//


#include<stdio.h>
main(){

	char str[]="Hello World..!";
	int length = strlen(str);
	int i;
	for(i=0;i<length;i++){
		printf("%c = %d\n",str[i],str[i]);
	}
}
