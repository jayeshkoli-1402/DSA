#include <stdio.h>

void main(){
	
	int num;
	int a = 5;
	int b = 2;
	printf("Enter the num:[for addtion: 1, substraction: 2, multiplication: 3, division: 4] ");
	scanf("%d", &num);
	switch(num){
		case 1:
			printf("The addition of of %d and %d is: %d", a,b,a+b);
			break;
		case 2:
			printf("The subtraction of of %d and %d is: %d", a,b,a-b);
			break;
		case 3:
			printf("The multiplication of of %d and %d is: %d", a,b,a*b);
			break;
		case 4:
			printf("The division of of %d and %d is: %d", a,b,a/b);
			break;
		default:
			printf("Wrong choice");
	}
	
	
	
}
