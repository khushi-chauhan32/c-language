//Q.3 Write a Program to find the transpose matrix of a given 2D array.
//For example,
//Input:
//Enter the array's row & column size: 3
//
//Enter array's elements:
//a[0][0] = 2
//a[0][1] = 4
//a[0][2] = 1
//a[1][0] = 3
//a[1][1] = 5
//a[1][2] = 4
//a[2][0] = 8
//a[2][1] = 2
//a[2][2] = 6
//
//Output:
//The transpose matrix of an array:
//2 3 8
//4 5 2
//1 4 6//



#include <stdio.h>
main() {
    int row,col,i,j;

    printf("ENTER THE ARRAY'S ROW SIZE: ");
    scanf("%d", &row);
    printf("ENTER THE ARRAY'S COLUMN SIZE: ");
    scanf("%d", &col);

    int arr[row][col];

    printf("ENTER ARRAY'S ELEMENTS:\n\n");
    for (i=0;i<row;i++) {
        for (j=0;j<col;j++) {
            printf("a[%d][%d] = ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("TRANSPOSE MATRIX OF AN ARRAY IS:- \n");
    for (i=0;i<row;i++) {
        for (j=0;j<col;j++) {
            printf("%d  ",arr[j][i]);
        }
        printf("\n");
    }
}
