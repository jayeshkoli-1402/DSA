#include <stdio.h>

void main()
{
	float radius, area;
	printf("Enter the radius: ");
	scanf("%f", &radius);
	area = 3.142 * radius * radius;
	printf("The area of circle with radius %f is: %f", radius, area);
}
