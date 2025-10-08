/*
Name: Simon Mwangi Wanjiru.
Reg No: CT101/G/26438/25
Date: 4/10/2025
Description: Program to print numbres in decending order from 100 to 50.
*/

//Preprocessor directive
#include <stdio.h>

//Variable declaration
int main(){
	int i;
	
	//Introductory statement
	printf("Numbers in decending order from 100 to 50.\n");
	
	//for loop to be executed
	//for(start; stop; step)
	for(i=100; i>=50; i--){
		printf("%d\n", i);
	}
	return 0;
	
}