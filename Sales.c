/*
Name: Simon Mwangi Wanjiru
Reg No: CT101/G/26438/25
Date: 11/5/2025
Description: Program to write and read from a file
*/



#include <stdio.h>

int main() {
    // Variable declarations
    float sales, total = 0.0;
    int day, month, year;
    char choice;
    FILE *fptr;

    // Open file for writing
    fptr = fopen("C:\\Users\\pc\\Desktop\\c programs\\sales.txt", "a");
    if (fptr == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    // Introductory message
    printf("\t\t\tNeema Retail Shop\n");
    printf("Sales Transaction Record\n\n");

    // Enter date
    printf("Please enter the date of sales entry record (dd mm yy): ");
    scanf("%d/%d/%d", &day, &month, &year);
    printf("Date entered is %d/%d/%d\n", day, month, year);

    // Clear input buffer
    while (getchar() != '\n');

    // Get sales input from user and write to file
    do {
        printf("Please enter sales for the date given above: ");
        scanf("%f", &sales);

        // Write each sale to the file
        fprintf(fptr, "%.2f\n", sales);

        printf("Do you want to enter another sale? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    // Close the file 
    fclose(fptr);

    printf("\nTransactions successfully stored in file sales.txt\n");

    // Open the file for reading
    fptr = fopen("C:\\Users\\pc\\Desktop\\c programs\\sales.txt", "r");
    if (fptr == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    // Read all sales and calculate total
    total = 0.0;
    while (fscanf(fptr, "%f", &sales) == 1) {
        total += sales;
    }

    // Display total
    printf("\nTotal sales for %d/%d/%d: Ksh %.2f\n", day, month, year, total);

    // Close file
    fclose(fptr);

    return 0;

}
