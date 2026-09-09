#include <stdio.h>

void main(){
	float breath, height, area;
	
	printf("Enter the breath of rectangle:\n ");
	scanf("%f", &breath);
	printf("Enter the height of rectangle:\n ");
	scanf("%f", &height);
	area = breath * height;
	printf("The area of triangle with breath %f and height %f is: %f\n", breath, height, area);
}
