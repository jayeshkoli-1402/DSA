#include <stdio.h>

void main(){
	
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	
	if(num%2 == 0){
		printf("The given number is even number");
	}
	else{
		printf("The given number is odd number");
	}
	
	
}
