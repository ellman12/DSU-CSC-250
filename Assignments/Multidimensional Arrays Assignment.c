///////////////////////////////////////////////////////////////////////
//File: Multidimensional Arrays Assignment.c
///////////////////////////////////////////////////////////////////////
//Purpose: File for Multidimensional Arrays Assignment.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Due Date: 25th.
///////////////////////////////////////////////////////////////////////
//Created: Wednesday, September 16, 2020.
//Finished: Tuesday, September 22, 2020.
///////////////////////////////////////////////////////////////////////
//Comments: https://d2l.sdbor.edu/d2l/lms/dropbox/user/folder_submit_files.d2l?db=876054&grpid=0&isprv=0&bp=0&ou=1453155
//I did the extra credit.
///////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <time.h>
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
float randPrice();                                             //Return a pseudorandom price.
void fillArraysRandNums();                                     //Called only when program runs for the first time.
void printArrays();

int main()
{
    int programRunning = 1;
    int menuChoice;       //User picking what they want to do in the program.
    int customerChoice;   //Number of the customer they want to edit.
    int monthChoice;      //User chooses what month they want to edit.
    float newDollarValue; //User enters new dollar value they want at that month for that customer.

    srand(time(NULL));
    fillArraysRandNums(); //Generate random data for the spreadsheet.

    printf("\nWelcome to the spreadsheet program! Get started by entering an option.\n");

    while (programRunning == 1)
    {
        printf("\n\n\n\n1. Print the values in the arrays.\n2. Edit a dollar value for a specific customer/month.\n3. Quit.\n\nWhat would you like to do? ");
        scanf("%d", &menuChoice);

        if (menuChoice == 1)
            printArrays();

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

float randPrice() //Return a pseudorandom price.
{
    int MIN = 0, MAX = 20000; //dollars
    float whole = rand() % (MAX + 1 - MIN) + MIN;
    float number, num1, num2;
    num1 = rand();
    num2 = rand();
    if (num1 < num2)
        number = num1 / num2;
    else
        number = num2 / num1;

    whole = whole + number;
    return whole;
}

void fillArraysRandNums() //Called only when program runs for the first time.
{
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            monthlyBalances[i][j] = randPrice();
        }
    }
}

void printArrays()
{
    //Reset these values. Otherwise they'll just keep going up.
    for (int i; i < 5; i++)
        annualAverages[i] = 0;

    printf("\n"); //Print out all six columns (five people and the monthly summary).
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            printf("%c", columns[i][j]);
        }

        printf("\t\t");
    }

    printf("\n"); //Print out the balances and the summary.
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            monthlySummary += monthlyBalances[i][j];
            annualAverages[i] += monthlyBalances[i][j];

            if (i < 9) //Make it look nice and perfectly aligned.
                printf("Month %d:  $ %.2f\t", i + 1, monthlyBalances[i][j]);
            else
                printf("Month %d: $ %.2f\t", i + 1, monthlyBalances[i][j]);
        }

        if (i < 9)
            printf("Month %d:  $ %.2f\n", i + 1, monthlySummary);
        else
            printf("Month %d: $ %.2f\n", i + 1, monthlySummary);

        monthlySummary = 0; //Reset for next month.
    }

    printf("\nAverage monthly balances:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("\t  $ %.2f\t", annualAverages[i]);
    }

    printf("\n");
}