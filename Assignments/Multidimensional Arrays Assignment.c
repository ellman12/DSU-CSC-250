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
///////////////////////////////////////////////////////////////////////
//Comments: https://d2l.sdbor.edu/d2l/lms/dropbox/user/folder_submit_files.d2l?db=876054&grpid=0&isprv=0&bp=0&ou=1453155
//I did the extra credit.
///////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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



int main()
{
    srand(time(NULL));

    int i, j;
    float monthlySummary; //For each month, this monthly summary is printed next to the five people in its own column.

    //One name in each row, plus the summary column.
    char columns[6][15] = {"Willie", "Kelly", "Terry", "Jordan", "Taylor", "Monthly Summary"};

    //Stores averages for the five customers for the whole year.
    float annualAverages[5];

    //Twelve months (rows), five columns with dollar values for the 5 customers.
    float monthlyBalances[12][5];

    printf("\n"); //Print out all six columns (five people and the monthly summary).
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 11; j++)
        {
            printf("%c", columns[i][j]);
        }

        printf("\t\t");
    }

    printf("\n"); //Print out the balances and the summary.
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 5; j++)
        {
            // monthlyBalances[i][j] = randPrice(); //TODO: Set this back to this. 10s are used for testing and easy math.
            monthlyBalances[i][j] = 10;
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

    for (i = 0; i < 5; i++)
    {
        printf("\t  $ %.2f\t", annualAverages[i]);
    }

    printf("\n");

    return 0;
}