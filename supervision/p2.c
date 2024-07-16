#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

    float calculate_percentage(int total_marks) {
    return (float)total_marks / 300 * 100;
}

int main() {
	
	int n;
	printf("enter detail of student:");
	scanf("%d",&n);
	
    struct Student students[n];
    int i;

    for (i = 0; i < n; i++) {
       
        printf("Roll no => ");
        scanf("%d", &students[i].roll_no);
        fflush(stdin);
        printf("Name => ");
        scanf("%s", students[i].name);
        printf("Chemistry => ");
        scanf("%d", &students[i].chem_marks);
        printf("Mathematics => ");
        scanf("%d", &students[i].maths_marks);
        printf("Physics => ");
        scanf("%d", &students[i].phy_marks);
        printf("\n");
    }

    for (i = 0; i < n; i++) {
        int total_marks = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        float percentage = calculate_percentage(total_marks);

        printf("%s (%d)\n", students[i].name, students[i].roll_no);
        printf("Chemistry => %d\n", students[i].chem_marks);
        printf("Mathematics => %d\n", students[i].maths_marks);
        printf("Physics => %d\n", students[i].phy_marks);
        printf("Total => %d/300\n", total_marks);
        printf("Percent => %.2f%%\n", percentage);
        printf("\n");
    }

}
