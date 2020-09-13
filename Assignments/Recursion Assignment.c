///////////////////////////////////////////////////////////////////////
//File: Recursion Assignment.c
///////////////////////////////////////////////////////////////////////
//Purpose: File for the Recursion Assignment.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Due Date: Sep. 16th, 2020
///////////////////////////////////////////////////////////////////////
//Creation date: Sep. 15th, 2020
///////////////////////////////////////////////////////////////////////
//Comments: https://d2l.sdbor.edu/d2l/lms/dropbox/user/folder_submit_files.d2l?db=871844&grpid=0&isprv=0&bp=0&ou=1453155
///////////////////////////////////////////////////////////////////////
#include <stdio.h>

int power(int base, int exponent);

int main()
{
    int userBase, userExponent; //What the user enters.
    printf("Enter the base: ");
    scanf("%d", &userBase);

    printf("Enter the exponent: ");
    scanf("%d", &userExponent);

    int result = power(userBase, userExponent);
    printf("The result is %d\n", result);

    return 0;
}

//Raises the base to a specified exponent. E.g., 3^4 = 81.
int power(int base, int exponent)
{
    if (exponent == 0 && base != 0)
    {
        return 1; //Any nonzero number raised to 0 becomes 1.
    }
    else if (exponent == 0 && base == 0)
    {
        printf("ERROR. 0^0 is undefined!");
        return; //Can't do this operation, so don't return a number.
    }
    else
        return base * power(base, exponent - 1);
}