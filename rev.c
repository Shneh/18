#include<stdio.h>
typedef struct student{
	char name[20];
	int age;
	float marks;
}st;
int main(){
	puts("ENTER THE NUMBER OF STUDENTS");
	int n, i;
	float sum=0;
	scanf("%d", &n);
	st stud[n];
	for(i=0; i<n; i++){
		printf("ENTER DETAILS FOR STUDENT: %d.\n", i+1);
		printf("ENTER NAME: ");
		scanf(" %[^\n]", stud[i].name);
		printf("ENTER AGE: ");
		scanf("%d", &stud[i].age);
		printf("ENTER MARKS: ");
		scanf("%f", &stud[i].marks);
		
		sum+=stud[i].marks;
		
	}
	printf("S. No. \t NAME \t\t AGE \t MARKS\n");
	for(i=0; i<n; i++){
		
		printf("%d \t %s \t\t %d \t %f\n", i+1, stud[i].name, stud[i].age, stud[i].marks);
	}
	float avg= sum/n;
	printf("AVG MARKS IS: %0.2f", avg);
	
	return 0;
	
}
