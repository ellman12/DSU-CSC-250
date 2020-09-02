///////////////////////////////////////////////////////////////////////
//File: Functions Assignment.c
///////////////////////////////////////////////////////////////////////
//Purpose: File for the Functions Assignment. It is a basic calculator.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme
///////////////////////////////////////////////////////////////////////
//Due Date: Sep. 9th 2020
///////////////////////////////////////////////////////////////////////
//Known issues/bugs: None
///////////////////////////////////////////////////////////////////////
//Revisions: 1.0
///////////////////////////////////////////////////////////////////////
//Comments: https://d2l.sdbor.edu/d2l/lms/dropbox/user/folder_submit_files.d2l?db=871844&grpid=0&isprv=0&bp=0&ou=1453155
///////////////////////////////////////////////////////////////////////
#include <stdio.h>

float add(float num1, float num2);
float subtract(float num1, float num2); // a - b.
float multiply(float num1, float num2);
float divide(float num1, float num2); // a / b

//alt method:

// do the math and print out after switch statement

int main()
{
    float num1, num2;
    int userChoice, proramRunning = 1;

    while (proramRunning == 1)
    {
        printf("Please choose one of the following options:\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Quit the program\n");
        scanf("%d", &userChoice);

        switch (userChoice)
        {
        case 1:
            printf("Enter two numbers to add: ");
            scanf("%f %f", &num1, &num2);
            printf("The answer is %f\n", add(num1, num2));
            break;

        case 2:
            printf("Enter two numbers to subtract: ");
            scanf("%f %f", &num1, &num2);
            printf("The answer is %f\n", subtract(num1, num2));
            break;

        case 3:
            printf("Enter two numbers to multiply: ");
            scanf("%f %f", &num1, &num2);
            printf("The answer is %f\n", multiply(num1, num2));
            break;

        case 4:
            printf("Enter two numbers to divide: ");
            scanf("%f %f", &num1, &num2);
            printf("The answer is %f\n", divide(num1, num2));
            break;

        case 5:
            proramRunning = 0;
            printf("Thank you for using the program. Goodbye!");
            break;

        default:
            printf("Error. That is not a choice.");
            break;
        }
    }

    return 0;
}

//Math functions.
float add(float num1, float num2)
{
    return num1 + num2;
}

float subtract(float num1, float num2)
{
    return num1 - num2;
}

float multiply(float num1, float num2)
{
    return num1 * num2;
}

float divide(float num1, float num2)
{
    return num1 / num2;
}