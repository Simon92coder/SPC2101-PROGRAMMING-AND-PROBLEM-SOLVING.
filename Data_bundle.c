/*
 Name: Simon Mwangi Wanjiru.
 Reg No: CT101/G/26438/25
 Date: 1/10/25
 Description: Program to purchase internet data bundles.
 */

//Pre processor directive
#include <stdio.h>


//Variable declaration
int main(){
	int choice;
	
	//Introductory statement
	printf("Hello and welcome to the data bundle purchase service\n");
	
	//Display for the menu
	printf("Data bundles on offer.\n");
	
	printf("1. 100 MB @ KES 50\n");
	
	printf("2. 500 MB @ KES 200\n");
	
	printf("3. 1 GB @ KES 350\n");
	
	printf("4. 2 GB @ KES 600\n");
	
	
	//Prompt to input choice
	printf("\nPlease enter your choice (1-4).\n");
	scanf("%d", &choice);
	
	//Switch statement to perform execution of selected bundle and cost
	switch(choice){
		case 1:
		 printf("Dear customer,  you have selected 100 MB bundle @ KES 50.\n");
		 break;
	 case 2:
	 	printf("Dear customer, you have selected 500 MB bundle @ KES 200.\n");
	 	break;
	 	case 3:
	 		printf("Dear customer, you have selected 1 GB bundle @ KES 350.\n");
	 		break;
	 	case 4:
	 		printf("Dear customer, you have selected 2 GB bundle @ KES 600.\n");
	 		break;
	 	default:
	 		printf("Invalid choice! Please try again.\n");
	}
	
	//closing statement
	printf("\nThank you for using our service.");
	
	return 0;
}
 
