#include <stdio.h>

void main(){
	
	int array[5]; //= {1,10,3,4,5};
	int sum,i;
	
	
	printf("Enter 5 array elements: \n");
	for(i = 0; i<5; i++){
		scanf("%d", &array[i]);
	}
	
	for(i = 0; i<5; i++){
		sum = sum + array[i];
	}
	
	printf("\nsum of array element is %d", sum);
}
