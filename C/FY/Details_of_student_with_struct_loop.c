#include <stdio.h>

	struct student{
		
		char name[10];
		int roll_no;
		int marks;	
		
	};
	
	
void main(){
	int i;
	struct student s[3];
	
	
	for(i = 0; i< 3; i++){	
		printf("Enter the name of s%d : ", i+1);
		scanf("%s", &s[i].name);
		printf("Enter the marks of s%d : ", i+1);
		scanf("%d", &s[i].marks);
		printf("Enter the roll_no of s%d : ", i+1);	
		scanf("%d", &s[i].roll_no);
	}
	
	
	printf("\nStudent details are: \n");
	for(i = 0; i<3; i++){
		printf("name of s%d %s \n",i+1, s[i].name);
		printf("marks of s%d %d \n",i+1, s[i].marks);
		printf("rollno of s%d %d \n",i+1, s[i].roll_no);
	}
	
	
	
	
	
	
}
