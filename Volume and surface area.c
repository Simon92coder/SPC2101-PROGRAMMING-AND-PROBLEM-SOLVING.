/*
Name: Simon Mawngi Wanjiru.
Reg No: CT101/G/26438/25.
Description: Program to compute surface area and volume of a cylinder.
Volume: pi*r*r*h.
Surface area: 2pi*r*r + 2pi*r*h.
*/

//Pre processor directive
#include <stdio.h> //printf(), Scanf()

//Variable declaration
int main(){
	double radius, height ,Surface_area, Volume;
	float pi= 3.142;
	
	
	//Prompting the user to input radius and height
	printf("Please enter the radius in meters.\n");
	scanf("%lf",&radius);
	
	printf("Please enter the height in meters.\n");
	scanf("%lf", &height);
	
	//compute volume
	Volume= pi * radius * radius * height;
	
	printf("The Volume of the cylinder is %.4lf.\n", Volume);
	
	//compute surface area
	Surface_area= 2 * pi * radius * radius + 2 * pi * radius * height;
	
	printf("The surface_area of the cylinder is %.4lf.", Surface_area);
	
	return 0;

}
