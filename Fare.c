/*
Name: Simon Mwangi Wanjiru.
Reg No: CT101/G/26438/25
Date: 10/19/2025
Description: Program to calculate bus fare
Rate: Ksh 50 per kilometer
*/
//Preprocessor directive
#include <stdio.h>

//Function prototype
float calculatefare(float distance);


//variable declaration
void main(){
	float distance, fare;
    float rate=50;
	
	
	printf("Hello dear customer.Welcome to the fare payment service.\n");
	//Prompt to input distance covered
	printf("Please enter the distance covered in kilometers:\n");
	scanf("%f", &distance);
	
	//Distance covered
	printf("You covered %.2fKm\n", distance);
	
	printf("Please take note that you shall be charged Ksh 50 for each kilometre covered.\n");
	
	//Function call
	fare=calculatefare(distance);
	//output for fare
	printf("Dear customer, your fare is ksh %.2f", fare);
	
	//Closing statement of program
	printf("Thank you for using our services.\n");
	
}
//Function declaration
float calculatefare(float distance){
	float fare;
	float rate=50;
	fare=distance*rate;
	return fare;
}

