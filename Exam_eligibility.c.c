/*
Name: Simon Mwangi Wanjiru.
Reg No: CT101/G/26438/25.
Date: 29/09/20225.
Description: Program to determine exam eleigibility for students.
*/


//Preprocessor directive
#include <stdio.h>

//Variable declaration
int main(){
	int Attendance;
	int Average_marks;
	
	//welcoming user to the program
	printf("Hello and welcome to the exam eleigibility program.\n");
	
	
	//Notice of total number of sessions in the semester
	printf("Dear student, note that the maximum number of sessions for Sem1 25/26 is 100.\n");
	
	//prompt to input total number of attended sessions
	printf("Please enter your confirmed number of attended sessions:\n");
	scanf("%d", &Attendance);
	
	
	//prompt to input avareage mark
	printf("\nPlease enter your average mark for Y1S1:\n");
	scanf("%d", &Average_marks);
	
	
	//Display of user input
	printf("You have attended %d sessions.\n", Attendance);
	printf("Your average mark is %d marks.\n", Average_marks);
	
	
	//conditions for exam eligibility
	if(Attendance>=0.75*100 && Average_marks>=40){
		printf("Congratulations, you are eligible to sit for the final exam.\n");
		printf("Please visit your student portal to generate your exam card.\n");
	}else{
		printf("Dear student, You are not eligible to sit for the final exam.\n");
	}
	printf("Thankyou.");
	
	
	
	
	
	return 0;
}