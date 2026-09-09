#include <stdio.h>

void main(){
	
	int matrix1[3][3]; //={{2,3,4},{2,3,4},{2,3,4}};
	int matrix2[3][3]; //={{2,3,4},{2,3,4},{2,3,4}};
	int matrix3[3][3];
	int i,j;
	
	//Scanning Matrix
	printf("Enter the first matrix elements:\n");
	for (i = 0; i < 3; i++){
	 
	  for (j = 0; j < 3; j++){ 
	  		scanf("%d", &matrix1[i][j]);
	   }
	   printf("\n");
	}
	
	
		printf("Enter the second matrix elements:\n");
	for (i = 0; i < 3; i++){
	 
	  for (j = 0; j < 3; j++){ 
	  		scanf("%d", &matrix2[i][j]);
	   }
	    printf("\n");
	}
	
	
	
	//Subtracting Matrix
	for (i = 0; i < 3; i++){
	 
	  for (j = 0; j < 3; j++){ 
	  		matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
	   }
	}
	
	
	//Printing Matrix
	for (i = 0; i < 3; i++){
	 
	  for (j = 0; j < 3; j++){ 
	  		printf("%d\t", matrix3[i][j]);
	   }
	   printf("\n");
	}
}
