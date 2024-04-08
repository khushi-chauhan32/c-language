#include<stdio.h>
main(){
	
	int guj, eng, ss, com, sci;
	float per,total;
	
	
	printf("enter your marks gujrati:");
	scanf("%d",&guj);
	
	printf("enter your marks english:");
	scanf("%d",&eng);
	
	printf("enter your marks social scince:");
	scanf("%d",&ss);
	
	printf("enter your marks maths:");
	scanf("%d",&com);
	
	printf("enter your marks scince:");
	scanf("%d",&sci);
	
	total=guj+eng+ss+maths+sci;
	per=total/500*100;
	printf("per:-%.2f",per);
	
	if(per>=90){
			printf("grade A");
	}
	else if(per>=80){
			printf("grade B");
	}
	else if(per>=70){
			printf("grade C");
	}
	else if(per>=60){
			printf("grade D");
	}
	else if(per>=50){
			printf("grade E");
	}
	else{
		printf("grade F");
	}
	
	
	
	
}
