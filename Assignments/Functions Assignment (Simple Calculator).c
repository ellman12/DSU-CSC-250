///////////////////////////////////////////////////////////////////////
//File: Functions Assignment (Simple Calculator).c
///////////////////////////////////////////////////////////////////////
//Purpose: File for the Functions Assignment. It is a basic calculator.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
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

//Function prototyping.
float add(float num1, float num2);      // return a + b.
float subtract(float num1, float num2); // return a - b.
float multiply(float num1, float num2); // return a * b.
float divide(float num1, float num2);   // return a / b.

int main()
{
    float num1, num2;      //Numbers the user inputs.
    int userChoice;        //What the user wants to do in the program.
    int proramRunning = 1; //1 while program is running; 0 when it's not.

    //Runs until the user says to quit.
    while (proramRunning == 1)
    {
        printf("Please choose one of the following options:\n\n");
        printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Quit the program\n");
        scanf("%d", &userChoice);

        //Program decides what operation to do.
        switch (userChoice)
        {
        case 1:
            printf("\nEnter two numbers to add: ");
            scanf("%f %f", &num1, &num2);
            printf("\nThe answer is %f\n\n", add(num1, num2));
            break;

        case 2:
            printf("\nEnter two numbers to subtract: ");
            scanf("%f %f", &num1, &num2);
            printf("\nThe answer is %f\n\n", subtract(num1, num2));
            break;

        case 3:
            printf("\nEnter two numbers to multiply: ");
            scanf("%f %f", &num1, &num2);
            printf("\nThe answer is %f\n\n", multiply(num1, num2));
            break;

        case 4:
            printf("\nEnter two numbers to divide: ");
            scanf("%f %f", &num1, &num2);
            printf("\nThe answer is %f\n\n", divide(num1, num2));
            break;

        case 5:
            proramRunning = 0;
            printf("Thank you for using the program. Goodbye!\n");
            break;

        default:
            printf("Error. That is not a choice.\n\n");
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