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
//Comments:
///////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

float randPrice()
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

    //One name in each row.
    char customers[5][10] = {"Willie", "Kelly", "Terry", "Jordan", "Taylor"};

    float averages[5];

    //Twelve months (rows), five columns with dollar values for the 5 customers.
    float monthlyBalances[12][5];

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%c", customers[i][j]);
        }

        printf("\t\t\t");
    }

    printf("\n");

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 5; j++)
        {
            monthlyBalances[i][j] = randPrice();
            averages[i] += monthlyBalances[i][j];
            printf("Month %d balance: $ %.2f\t", i + 1, monthlyBalances[i][j]);
        }

        printf("\n");
    }

    for (i = 0; i < 5; i++)
    {
    }

    return 0;
}