///////////////////////////////////////////////////////////////////////
//File: Recursion Assignment.c
///////////////////////////////////////////////////////////////////////
//Purpose: File for the Recursion Assignment.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Due Date: Sep. 16th, 2020
///////////////////////////////////////////////////////////////////////
//Creation date: Sep. 12th, 2020
///////////////////////////////////////////////////////////////////////
//Comments: https://d2l.sdbor.edu/d2l/lms/dropbox/user/folder_submit_files.d2l?db=873465&grpid=0&isprv=0&bp=0&ou=1453155
///////////////////////////////////////////////////////////////////////
#include <stdio.h>

float power(float base, float exponent);

int main()
{
    float userBase, userExponent; //What the user enters.
    float result;                 //Result after calling power function.

    printf("\nEnter the base: ");
    scanf("%f", &userBase);
    printf("Enter the exponent: ");
    scanf("%f", &userExponent);

    result = power(userBase, userExponent);
    printf("%f^%f = %f.\n\n", userBase, userExponent, result);

    return 0;
}

//Raises the base to a specified exponent. E.g., 3^4 = 81.
float power(float base, float exponent)
{

    if (exponent > 0)
        return base * power(base, exponent - 1);

    else if (exponent < 0)
        return 1 / power(base, -exponent);

    else
        return 1;
}