//Q.1 Write a Program to create a Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
//- stu_id
//- stu_name
//- stu_age
//- stu_course
//- stu_city
//- stu_standard
//- stu_school


#include<stdio.h>
#include<string.h>

struct student{
	
	int student_id;
    char student_name[50];
    int student_age;
    char student_course[50];
    char student_city[50];
    int student_standard;
    char student_school[50];
    
};

void main (){
	
	int n;
	printf("Enter Number Of student: ");
	scanf("%d",&n);
	
	struct student s1[n];
	
	int i;
	
	for(i = 0; i < n; i++){
	   printf("Student ID: ");
        scanf("%d", &s1[i].student_id);
        
        fflush(stdin);
        printf("Student Name: ");
        gets(s1[i].student_name);
        
        printf("Student Age: ");
        scanf("%d", &s1[i].student_age);
        
        fflush(stdin);
        printf("Student Course: ");
        gets(s1[i].student_course);
        
        fflush(stdin);
        printf("Student City: ");
        gets(s1[i].student_city);
        
        printf("Student Standard: ");
        scanf("%d", &s1[i].student_standard);
        
        fflush(stdin);
        printf("Student School: ");
        gets(s1[i].student_school);
	}
	
	printf("\n\n");
	printf("|Student ID\t Student Name\t Student Age\t Student Course\t Student City\t Student Standard\t Student School|");
	printf("|----------\t ------------\t -----------\t --------------\t ------------\t ----------------\t --------------|");
	
	for(i = 0; i < n; i++){
		printf("|%d\t\t%s\t\t%d\t\t%s\t\t%s\t\t\%d\t\t%s|\n",s1[i].student_id,s1[i].student_name,s1[i].student_age,s1[i].student_course,s1[i].student_city,s1[i].student_standard,s1[i].student_school);
	}
}
	
	
	
	
	
	

