#include <stdio.h>

void main() {
    // 1-dimensional array with user input
	int i;   
    int a[4];
    
   
   	printf("Enter array elements: ");
    for(i = 0; i < 4; i++) {
        scanf("%d", &a[i]);
    }

    
    printf("Entered numbers numbers are:");
    for(i = 0; i < 4; i++) {
        printf("\n%d\n", a[i]);
    }

   
}

