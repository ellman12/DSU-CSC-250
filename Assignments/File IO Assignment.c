///////////////////////////////////////////////////////////////////////
//File: File IO Assignment.c
///////////////////////////////////////////////////////////////////////
//Purpose: Assignment
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Due Date: idk
///////////////////////////////////////////////////////////////////////
//Created: Wednesday, September 23, 2020.
///////////////////////////////////////////////////////////////////////
//Comments: https://d2l.sdbor.edu/d2l/lms/dropbox/user/folder_submit_files.d2l?db=878454&grpid=0&isprv=0&bp=0&ou=1453155
///////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

//One name in each row, plus the summary column.
char columns[6][15] = {"Willie", "Kelly", "Terry", "Jordan", "Taylor", "Monthly Summary"};

//Stores averages for the five customers for the whole year.
float annualAverages[5];

//Twelve months (rows), five columns with dollar values for the 5 customers.
float monthlyBalances[12][5];

float monthlySummary; //For each month, this monthly summary is printed next to the five people in its own column.

void editDollarValue(int customer, int month, float newValue); //Used in menu option #2.
int invalidEntryCheck(int choice, int minValue, int maxValue); //Used throughout the program.
void fillArraysBinFile();                                      //Called only when program runs for the first time.
void monthlyBalancesToBinFile();                               //Writes the monthlyBalances array to a txt file.

int main()
{
    int programRunning = 1;
    int menuChoice;       //User picking what they want to do in the program.
    int customerChoice;   //Number of the customer they want to edit.
    int monthChoice;      //User chooses what month they want to edit.
    float newDollarValue; //User enters new dollar value they want at that month for that customer.

    fillArraysBinFile(); //Generate data for the spreadsheet.
    printf("\nWelcome to the spreadsheet program! Get started by entering an option.\n");

    while (programRunning == 1)
    {
        printf("\n\n\n\n1. Print the values in the arrays to the txt file.\n2. Edit a dollar value for a specific customer/month.\n3. Quit.\n\nWhat would you like to do? ");
        scanf("%d", &menuChoice);

        if (menuChoice == 1)
            monthlyBalancesToBinFile();

        else if (menuChoice == 2) //Edit value.
        {
            printf("\n1. Willie\n2. Kelly\n3. Terry\n4. Jordan\n5. Taylor\n\nChoose a customer (enter a number): ");
            scanf("%d", &customerChoice);

            if (invalidEntryCheck(customerChoice, 0, 5))
            {
                printf("\nError. Invalid choice. Try again.");
                continue;
            }

            printf("\n\n1. January\n2. February\n3. March\n4. April\n5. May\n6. June\n7. July\n8. August\n9. September\n10. October\n11. November\n12. December\n\nEnter a month number: ");
            scanf("%d", &monthChoice);

            if (invalidEntryCheck(monthChoice, 0, 12))
            {
                printf("\nError. Invalid choice. Try again.");
                continue;
            }

            printf("Enter a new dollar value without the $: ");
            scanf("%f", &newDollarValue);

            editDollarValue(customerChoice, monthChoice, newDollarValue);
            printf("Value has been updated! Type 1 to see the change.\n");
            monthlyBalancesToBinFile();
        }

        else if (menuChoice == 3) //Quit.
        {
            printf("Goodbye!\n");
            programRunning = 0;
        }

        else
            printf("\nError. Invalid choice. Try again.");
    }

    return 0;
}

void editDollarValue(int customer, int month, float newValue)
{
    monthlyBalances[month - 1][customer - 1] = newValue; //Subtracting those by 1 since arrays start at 0.
}

//Checks to see if a user entered an invalid choice/option for a menu.
//Returns 1 if true (they did), or 0 if they did not enter bad data.
int invalidEntryCheck(int choice, int minValue, int maxValue)
{
    if (choice < minValue || choice > maxValue)
        return 1; //User entered an incorrect choice.
    else
        return 0; //They didn't.
}

void fillArraysBinFile() //Called only when program runs for the first time.
{
    FILE *binFilePtr = fopen("balances.bin", "rb");

    float x;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            fread(&x, sizeof(float), 1, binFilePtr);
            monthlyBalances[i][j] = x;
        }
    }

    fclose(binFilePtr);
}

void monthlyBalancesToBinFile()
{
    FILE *txtFilePtr = fopen("balances.txt", "w+");

    //Reset these values. Otherwise they'll just keep going up.
    for (int i; i < 5; i++)
        annualAverages[i] = 0;

    //Print out all six columns (five people and the monthly summary).
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            fprintf(txtFilePtr, "%c", columns[i][j]);
        }

        fprintf(txtFilePtr, "\t\t");
    }

    fprintf(txtFilePtr, "\n"); //Print out the balances and the summary.
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            monthlySummary += monthlyBalances[i][j];
            annualAverages[i] += monthlyBalances[i][j];

            if (i < 9) //Make it look nice and perfectly aligned.
                fprintf(txtFilePtr, "Month %d:  $ %.2f\t", i + 1, monthlyBalances[i][j]);
            else
                fprintf(txtFilePtr, "Month %d: $ %.2f\t", i + 1, monthlyBalances[i][j]);
        }

        if (i < 9)
            fprintf(txtFilePtr, "Month %d:  $ %.2f\n", i + 1, monthlySummary);
        else
            fprintf(txtFilePtr, "Month %d: $ %.2f\n", i + 1, monthlySummary);

        monthlySummary = 0; //Reset for next month.
    }

    fprintf(txtFilePtr, "\nAverage monthly balances:\n");

    for (int i = 0; i < 5; i++)
    {
        fprintf(txtFilePtr, "\t  $ %.2f\t", annualAverages[i]);
    }

    fprintf(txtFilePtr, "\n");

    printf("\nDONE!\n");
    fclose(txtFilePtr);
}