/*
Name: Simon Mwangi Wanjiru.
Reg No: CT101/G/26438/25
Date: 7/10/2025
Description: Program to input withdrwal amount for atm and display balance
*/


//Preprocessor directive
#include <stdio.h>

//Variable declaration
int main(){
	float balance=5000; //start
	float amount;
	//introductory statement
	printf("Hello and welcome to Neema Bank ATM serivice.\n");
	
	//statement to show current balance
	printf("Your current balance is Ksh%.2f\n", balance );
	
	//while loop input
	while(balance>=0){ //stop
		printf("Please enter the amount you wish to withdraw:\n");
		scanf("%f", &amount);
	balance=balance-amount;
	printf("Your balance is Ksh%.2f\n", balance);

	}
	printf("Unfotrunateley you have insufficient balance to process this withdrwal.\n");
	
	//Closing statement
	printf("Thank you for banking with us.");
	
	return 0;
}
