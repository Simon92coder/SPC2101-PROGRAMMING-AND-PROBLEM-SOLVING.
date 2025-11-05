/*
Name: Simon mwangi wanjiru
Reg No: CT101/G/26438/25
Date: 11/5/2025
*/

//Preprocessor directives
#include <stdio.h>
#include <stdlib.h>

//User defined function
struct Student {
    char name[50];
    char reg_no[20];
    float total_marks;
};

//Main function
int main() {
	
	//Variable declaration
    FILE *fp;
    struct Student s;
    int n, i;

	//Opeining the file
    fp = fopen("C:\\Users\\pc\\Desktop\\c programs\\results.dat", "wb");
    if (fp == NULL) {
        printf("Error: Could not create file.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar(); // clear newline

	//Loop to obtain user input
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        fgets(s.name, sizeof(s.name), stdin);
        s.name[strcspn(s.name, "\n")] = '\0'; // remove newline

        printf("Registration Number: ");
        fgets(s.reg_no, sizeof(s.reg_no), stdin);
        s.reg_no[strcspn(s.reg_no, "\n")] = '\0';

        printf("Total Marks: ");
        scanf("%f", &s.total_marks);
        getchar();

        fwrite(&s, sizeof(struct Student), 1, fp);
    }

	//Closing the file for writting
    fclose(fp);
    printf("\nData saved successfully to 'results.dat'.\n");
    
   //READ PART: Read and display records from file
    fp = fopen("C:\\Users\\pc\\Desktop\\c programs\\results.dat", "rb");
    if (fp == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    printf("\n--- Reading data from 'results.dat' ---\n");
    printf("=====================================\n");

    while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
        printf("Name: %s\n", s.name);
        printf("Registration No: %s\n", s.reg_no);
        printf("Total Marks: %.2f\n\n", s.total_marks);
    }

    fclose(fp);
    printf("End of records.\n");

    return 0;
} 
    
    