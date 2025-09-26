/*
Name: Simon Mwangi Wanjiru.
Reg No: CT101/G/26438/25
Description: Program for loan assessment on condtional basis.
*/


//pre processor directive
#include <stdio.h>


//Variable declaration
int main(){   //scanf() printf()
	char first_name;
	char middle_name;
	char surname;
	int age;
	double annual_income;
	
	//Introductory statement 
	printf("Hello and welcome to Neema bank.\n");
	
	//prompt to input first name
	printf("Please enter your first name.\n");
	scanf("%s", &first_name);
	
	//Prompt to input middle name
	printf("Please enter your middle name.\n");
	scanf("%s", &middle_name);
	
	//prompt to input surname
	printf("Please enter your surname.\n");
	scanf("%s", &surname);
	
	
	//Prompt to input age
	printf("Please enter your age.\n");
	scanf("%d", &age);
	
	//Prompting the user to input annual income.
	printf("Please enter your annual income in Ksh.\n");
    scanf("%lf", &annual_income);
    
    //conditions for awarding loan
    if(age>=21 && annual_income>=21000){
		printf("Congratulations you qualify for a loan.\n");
	}else{
		printf("Unfortunately you do not qualify for a loan at this time.\n");
	}
	
	printf("Thankyou choosing Neema bank, Your trusted financial patner.");
	
	
	
	
	
	return 0;
}
