//Q.6 Write a Program to perform the addition operation of two 2D arrays & store it in another array. Keep in mind that both array sizes must be the same.
//For example,
//Input:
//Enter the array's row size: 3
//Enter the array's column size: 3
//
//Enter array A's elements:
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
//Enter array B's elements:
//b[0][0] = 3
//b[0][1] = 6
//b[0][2] = 2
//b[1][0] = 5
//b[1][1] = 6
//b[1][2] = 8
//b[2][0] = 3
//b[2][1] = 7
//b[2][2] = 4
//
//Output:
//Array C is:
//5   10  3
//8   11 12
//11  9  10 


#include <stdio.h>
main() {
    int r, c , i , j,a;

    printf("Enter the array's row size: ");
    scanf("%d", &r);
    printf("Enter the array's column size: ");
    scanf("%d", &c);

    int arr[r][c], arr1[r][c], arr2[r][c];

    printf("\nEnter array A's elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nEnter array B's elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("\nArray C is:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            arr2[i][j] = arr[i][j] + arr1[i][j];
            printf("%d\t", arr2[i][j]);
        }
        printf("\n");
    }

}

