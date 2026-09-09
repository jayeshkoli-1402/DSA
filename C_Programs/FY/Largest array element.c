#include <stdio.h>

void main(){
	int sizeofarray,i,sum;
	int array[sizeofarray];
	
	printf("Enter the size of array:\n ");
	scanf("%d", &sizeofarray);
	
	
	printf("Enter the elements of array:\n ");
	for(i = 0; i<sizeofarray; i++){
		scanf("%d", &array[i]);
	}
	sum = array[0];
	
	for(i = 0;i<sizeofarray; i++){
		if(sum < array[i]){
			sum = array[i];
		}
	}
	
	printf("The largest number in all array Elements is %d", sum);
}


