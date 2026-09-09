#include <stdio.h>

void main(){
	float base, height, area;
	
	printf("Enter the base of triangle:\n ");
	scanf("%f", &base);
	printf("Enter the height of triangle:\n ");
	scanf("%f", &height);
	area = base * height;
	area = area/2;
	printf("The area of triangle with base %f and height %f is: %f\n", base, height, area);
}

