//Q.1 Write a Program to write even & odd numbers from 50 to 70 into two separate files.
//For example, 
//Output:
//Even numbers from even_file.txt:
//50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70
//
//Odd numbers from odd_file.txt:
//51, 53, 55, 57, 59, 61, 63, 65, 67, 69

#include <stdio.h>

int main() {
    FILE *even_file, *odd_file;
    int i;

    even_file = fopen("even_file.txt", "w");
    odd_file = fopen("odd_file.txt", "w");

    if (even_file == NULL || odd_file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    for (i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            fprintf(even_file, "%d", i);
            if (i != 70) fprintf(even_file, ", ");
        } else {
            fprintf(odd_file, "%d", i);
            if (i != 69) fprintf(odd_file, ", ");
        }
    }

    fclose(even_file);
    fclose(odd_file);

    printf("Even numbers from even_file.txt: ");
    for (i = 50; i <= 70; i += 2) {
        printf("%d", i);
        if (i != 70) printf(", ");
    }
    printf("\n");

    printf("Odd numbers from odd_file.txt: ");
    for (i = 51; i <= 69; i += 2) {
        printf("%d", i);
        if (i != 69) printf(", ");
    }
    printf("\n");

}
