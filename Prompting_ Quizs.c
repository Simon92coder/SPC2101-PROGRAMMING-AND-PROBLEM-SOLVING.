/*
Name: Simon Mwangi Wanjiru.
Reg No: CT101/G/26438/25.
Description: Program to prompt a user.
*/


//pre processor directive
#include <stdio.h>
//variable declaration
int main(){
 int height;
 int bankbalance;
 int phonenumber;
 
 //Introductory statement.
 printf("My name is Simon Mwangi, Registration number CT101/G/26438/25, a student in Kirinyaga University requesting that you fill in the following data\n");
 //Prompting the user to input height.
 printf("1.Please enter your height:");
 scanf("%d",&height);
 
 //Instructing the user to proceed to the next field.
 printf("please proceed to the next field\n");
 
 //Prompting the user to input their bank balance.
 printf("2.Please enter your bank balance");
scanf("%d",&bankbalance); 

 //prompting the user to input their bank balance.
 printf("3.Please enter your phone number\n");
 scanf("%d",&phonenumber);
 
 //Output to the user.
 printf("Your height is %dft.\n", height) ;
 printf("Your bank balance is  Ksh%d.\n", bankbalance);
 printf("Your phonenumber is %d.\n", phonenumber);

 
 printf("Thankyou for your time.");
 return 0;
	
};

