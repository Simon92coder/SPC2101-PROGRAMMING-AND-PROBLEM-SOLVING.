/*
Name:Simon Mwangi Wanjiru
Reg No:CT101/G/26438/25
Description: Program to convert temperature in fahrenheit to degrees celcius.
Formula in use: C=(F-32)*5/9 where:
F=input in fahrenheit;
C= output in degree celsius
Date:10/19/2025
*/

//Preprocessor directive
#include <stdio.h>

//Function Prototype
float converttocelsius(float fahrenheit);




void main(){
	float input, celsius;
	
	//Introductory statement
	printf("Hello and welcome to the temperature converter.\n");
	
	//Prompt user to input temperature value to be converted
	printf("Please enter the temperature in fahrenheit:\n");
	scanf("%f", &input);
	
	//Function call to convert
	celsius= converttocelsius(input);
	
	//Output result to user
	printf("The temperature in degrees celcius is %.2f\n", celsius);
	
	//Closing statement after successful execution
	printf("Thank you for using this service.\n");
	
}

//Function declaration
float converttocelsius(float fahrenheit){
float celsius=(fahrenheit - 32) * 5 / 9;
return celsius;
}


