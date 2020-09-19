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

    //One name in each row.
    char customers[5][10] = {"Willie", "Kelly", "Terry", "Jordan", "Taylor"};

    //Twelve months (rows), five columns with dollar values for the 5 customers.
    float monthlyBalances[12][5];

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            monthlyBalances[i][j] = randPrice();
            printf("customers[%d][%d] = $ .2%f\n", i, j, monthlyBalances[i][j]);
        }

        printf("\n");
    }

    return 0;
}