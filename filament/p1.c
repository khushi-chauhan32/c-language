//Q.1 Write a Program to check whether a string is a palindrome or not without using string functions.
//For example,
//Input:
//Enter any string: nayan
//
//Output:
//Given string is a Palindrome.
//
//------------------------------------------------
//
//For example,
//Input:
//Enter any string: hello
//
//Output:
//Given string is not a Palindrome.



#include <stdio.h>

int main() {
    char str[100];
    int i, length,palindrome = 1;

    printf("Enter any string: ");
    scanf("%s", str);
   
    for(length = 0; str[length] != '\0'; length++);

    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]) {
            palindrome = 0;
            break;
        }
    }

  
    if(palindrome){
    	 printf("Given string is a Palindrome.\n");
	}
    else{
    	printf("Given string is not a Palindrome.\n");
	}
        

    
}
