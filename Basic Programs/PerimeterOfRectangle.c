#include<stdio.h>
int main(){
	float length;
	float breadth;
	printf("Write the length of Rectangle: ");
	scanf ("%f", &length);
	printf("Write the breadth of Rectangle: ");
	scanf ("%f", &breadth);
	printf ("The perimeter is: %f", 2*(length+breadth));
}
