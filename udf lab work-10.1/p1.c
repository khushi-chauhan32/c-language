//Questions:
//Q.1 Write a Program to find the cube of a given number using UDF.For example,
//Input:
//Enter any number: 5
//
//Output:
//Cube is: 125



#include <stdio.h>


int cube(int num) {
    return num * num * num;
}

int main() {
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("Cube is: %d\n", cube(num));

    return 0;
}
