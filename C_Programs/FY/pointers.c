#include <stdio.h>

void main(){
	
	int a = 5;
	int *ptr = &a;
	
	printf("The value of a is: %d\n", a);
	printf("The address of a using ptr is: %p\n", ptr);
	printf("The address of a using a is: %p\n", &a);
	printf("The address of a in numeric format is: %u\n", ptr);
	printf("The address of a using a is: %d\n", &a);
	printf("The value of a using ptr is: %d\n", *ptr);
	
	
	
}
