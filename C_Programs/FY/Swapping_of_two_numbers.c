#include <stdio.h>

void main(){
	
	int num1;
	int num2;
	int num3;
	
	printf("Enter the first number: \n");
	scanf("%d", &num1);
	
	printf("Enter the second number: \n\n");
	scanf("%d", &num2);
	
	printf("value of a before swapping: %d\n",num1);
	printf("value of b before swapping: %d\n\n\n",num2);
	
	num3 = num1;
	num1 = num2;
	num2 = num3;
	
	printf("value of a before swapping: %d\n",num1);
	printf("value of b before swapping: %d\n",num2);
}	
