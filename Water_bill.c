/*
Name: Simon Mwangi Wanjiru.
Reg No: CT101/G/26438/25
Date: 30/9/2025
Description: Program to calculate total water bill.
*/


//preprocessor directive
#include <stdio.h>

//Variable declaration
int main(){
	float water_units;
	float water_bill;
	
	//Introductory staement
	printf("Hello and welcome to Neema water company water bill calculator.\n");
	
	//Prompt to input units consumed
	printf("Please enter the number of water units consumed:\n");
	scanf("%f", &water_units);
	
	//conditions determing amount to be paid
	if(water_units>=61){
		printf("Total water bill is KES %.2f", water_units*30);
	}
	else if(water_units>30){
		printf("Total water bill is KES %.2f", water_units*25);
		}
		else if(water_units>0){
		printf("Total water bill is KES %.2f", water_units*20);
	}
	
	//closing statement
	printf("\nThankyou for choosing Neema water company.");
	
	
	return 0;
}
