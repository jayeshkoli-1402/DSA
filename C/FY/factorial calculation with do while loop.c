#include <stdio.h>

void main(){
	int num;
	int i = 1;
	int fact = 1;
	
	printf("Enter the number: ");
	scanf("%d", &num);
	
	do{
		fact = fact * i;
		i++;
	}while(i<=num);
	printf("Factorial of %d is : %d", num, fact);
	
}
