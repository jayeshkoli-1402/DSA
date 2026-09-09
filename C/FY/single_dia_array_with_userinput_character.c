#include <stdio.h>
#include <string.h>

void main(){
	
	char a[10];
	int i;
	
	printf("Enter the characters for array:\n ");
	for(i=0;i<10;i++){
		scanf("%c", &a[i]);
	}
	printf("Your entered array is: \n");
	for(i=0;i<10;i++){
		printf("%c",a[i]);
	}
	
	
}
