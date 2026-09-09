#include <stdio.h>

void main(){
	int num1,num2,opearation;
	float result;
	printf("Enter the first number:");
	scanf("%d", &num1);
	
	printf("Enter the secont number:");
	scanf("%d", &num2);
	
	printf("Enter number for opearation [1 for addition, 2 for subtraction, 3 for multiplication, 4 for division]:");
	scanf("%d", &opearation);
	
	switch(opearation){
		case 1:
			result = num1 + num2;
			printf("The addition of %d and %d is %.2f", num1, num2, result);
			break;
		case 2:
			result = num1 - num2;
	 		printf("The subtraction of %d and %d is %.2f", num1, num2, result);
	 		break;
		case 3:
			result = num1 * num2;
			printf("The multiplication of %d and %d is %.2f", num1, num2, result);
			break;
		case 4:
			result = num1 / num2;
			printf("The division of %d to %d is %f", num1, num2, result);
			break;
			
		
	}
	
	
}
