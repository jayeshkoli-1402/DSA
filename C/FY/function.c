#include <stdio.h>

float area(int radius){
	return radius * radius * 3.142;
}

void main(){
	float result = area(5);
    printf("The area of circle is: %f", result);
}
