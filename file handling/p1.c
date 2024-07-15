#include<stdio.h>

void main(){
	FILE *fp;
	fp=fopen("demo.txt","a");
	
	if(fp!=NULL){
		printf("file is successfully open......");
		 fprintf(fp,"\nhello c-language...!");
	}
	else{
		printf("file is not open");
	}
}
