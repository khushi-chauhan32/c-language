//Q.2 Write a Program to count the frequency of each character in a given string.
//For example,
//Input:
//Enter any string: development
//
//Output:
//Frequency of each letter:
//d => 1
//e => 3
//v => 1
//e => 3
//l => 1
//o => 1
//p => 1
//m => 1
//e => 3
//n => 1
//t => 1



#include <stdio.h>
int main() {
	
    int i, freq[256] = {0};
    char a[50];
    
    printf("Enter any string : ");
    gets(a);
    
    for (i = 0; a[i] != '\0'; i++) {
        if (isprint(a[i])) {
            freq[(int)a[i]]++;
        }
    }
    
    printf("\nFrequency of each letter :");
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0 && isprint(i)) {
            printf("\n%c: %d", (char)i, freq[i]);
        }
    }
}
