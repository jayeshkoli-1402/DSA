#include <stdio.h>

	struct student{
		
		char name[10];
		int roll_no;
		int marks;	
		
	};
	
	
void main(){
	
	struct student jayesh;
	
	
	printf("Add Info for jayesh: \n");
	printf("Enter the name: \n");
	scanf("%s", &jayesh.name);
	printf("Enter the roll_no: \n");
	scanf("%d", &jayesh.roll_no);
	printf("Enter the marks: \n");
	scanf("%d", &jayesh.marks);
	
	
	printf("\n\nDetails of student is: \n\n");
	printf("name of student is %s\n", jayesh.name);
	printf("roll_no of student is %d\n", jayesh.roll_no);
	printf("marks of student is %d\n", jayesh.marks);
	
}
