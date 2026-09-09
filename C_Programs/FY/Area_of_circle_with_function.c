#include <stdio.h>

void areaofcircle(float radius);

void main(){
	float radius;
	printf("Enter the radius of circle: ");
	scanf("%f", &radius);
	areaofcircle(radius);
	
}

void areaofcircle(float radius){
	const float PI = 3.142;
	printf("The area of circle with radius %.2f is: %.2f", radius, radius*radius* PI);
}


