/*
Name: Simon Mwangi Wanjiru
Reg No: CT101/G/26438/25
Description: Program to input correct password
Loop type: Do while loop
Date: 8/10/2025
*/ 

//Preprocessor directive
#include <stdio.h>

//Variable declaration and initilization
int main(){
	int password;
	int correct_password=1234;
	int input;
	
	//do while loop input
	do{
		printf("Please enter your password:\n");
		printf("Please ensure you input only numbers.\n");
	input=	scanf("%d", &password);
	//input to remove instance of letter input from scanf
	  if (input != 1) {
            printf("Invalid input! Please enter digits only.\n");
            // clear the bad input to avoid program failure
            while (getchar() != '\n'); 
            continue; // skip to next loop
        }

		if(password != correct_password){
			printf("Access Denied.\n");
		}
	}while(password!=correct_password);{
			printf("Access Granted.Welcome.");
	}
	
		
return 0;	
}