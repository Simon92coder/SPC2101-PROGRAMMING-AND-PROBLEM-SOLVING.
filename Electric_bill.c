/*
Name: Simon Mwangi Wanjiru
Reg No: CT101/G/26438/25
Date: 10/19/2025
Description: Program to calculate electric bil based on the following rates:
For the first 100 units=KSh 10 per unit 
For the next 100 units=KSh 15 per unit 
Above 200 units=KSh 20 per unit
*/

//Preprocessor directive
#include <stdio.h>

//Function prototype
float calculateelectricbill(float units_consumed);

//Variable declration
void main(){
	float units_consumed, total_bill;
	//Introductory statement
	printf("Hello and welcome to the electric bill paying service.\n");
	
	//Prompt to input number of units consumed
	printf("Please enter the number of units consumed:\n");
	scanf("%f", &units_consumed);
	
	//Display of units input by user
	printf("Dear customer you have consumed %.2f units.\n", units_consumed);
	
	//function call
	total_bill=calculateelectricbill(units_consumed);
	
	//Output of total bill to user
	printf("Dear customer, your total bill is %.2f\n", total_bill);
	
	//Closing statement
	printf("Thank you for using our service.\n");
	
}
//Function declration
float calculateelectricbill(float units_consumed){
	float total_bill;
	if(units_consumed<=100){
		total_bill=(10*units_consumed);
	}else if(units_consumed<=200){
		total_bill=(10*100)+ (units_consumed-100)*15;
	}else if(units_consumed>200){
		total_bill=(10*100)+(100)*15 + (units_consumed-200)*20;
	}
	return total_bill;
}