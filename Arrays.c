/*
Name: Simon Mwangi Wanjiru
Reg No: CT101/G/26438/25
Date: 10/27/2025
Description: Program to run a hotel management system
Room occupancy across hotel branches an floors
weekly revenue in branch one of hotel
Hotel example in use: Neema Hotel
*/


//Preprocessor directives
#include <stdio.h>
#include <stdlib.h>


//Main function
int main() {
	
	

    //Variable declaratin and array initialisation
    float revenue[7];  //One Dimensional array in use
    float total_revenue = 0, average_revenue;
    int occupancy [5][10];  //two dimensional array in use
    int chain[3][5][10];  //Three dimensional array in use
    int total_occupied = 0; 
    int i=0;
    int floor;
    int room;
    int branch;

//Introductory statement to program
printf("Neema Hotel\n");
printf("For Quality You can trust.\n\n\n");
printf("Hotel Management system.\n\n");

// 1D Array – Weekly Revenue Tracker
//Weekly revenue 
    printf("=== Weekly Revenue Entry ===\n");
    
    //For loop to calculate weekly revenue
    for(i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total_revenue += revenue[i];
    }

	//Calculation of average revenue
    average_revenue = total_revenue / 7;
    
//Display of total and average weekly revenue
    printf("\nTotal Weekly Revenue: %.2f\n", total_revenue);
    printf("Average Daily Revenue: %.2f\n\n", average_revenue);
    
    
    
    //2 Dimensional array- Room occupancy in branch 1
    
     //For loop to loop through the 50 rooms in branch 1
    for(floor=0; floor<5; floor++){
        printf("Floor %d:\n ", floor + 1);
        for(room=0; room<10; room++){
            printf("\tRoom %d: ", room + 1);
            scanf("%d", &occupancy[floor][room]);
        }
    }
    
    //Program spacing
    printf("\n");
    
    //Display of results
    printf("\n**** Room Occupancy Report ****\n\n");
    for (floor=0; floor<5; floor++){
        int occupied = 0, vacant = 0;

        for (room=0; room<10; room++){
            if (occupancy[floor][room] == 1) {
                occupied++;
            } else {
                vacant++;
            }
        }

        printf("Floor %d: Occupied = %d, Vacant = %d\n", floor + 1, occupied, vacant);
    }
    
    // 3D Array – Multiple Branches

    printf("\n=== Chain Wide Occupancy (3 Branches) ===\n");
    
    //for loop to calculate occupancy totals with already assigned values
    for(branch = 0; branch < 3; branch++) {
        for(floor = 0; floor < 5; floor++) {
            for(room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; //random occupancy 
                if(chain[branch][floor][room] == 1)
                    total_occupied++;
            }
        }
    }
//Display of total occupation of all branches.
    printf("Total Occupied Rooms Across All Branches: %d\n", total_occupied);
    
//Closing statement
printf("Neema Hotel\n");
printf("Quality at its best.");

    return 0;
}
