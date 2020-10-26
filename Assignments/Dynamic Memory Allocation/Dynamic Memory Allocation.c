///////////////////////////////////////////////////////////////////////
//Purpose:
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Due Date:
///////////////////////////////////////////////////////////////////////
//Created: Friday, October 23, 2020 6:31 PM.
///////////////////////////////////////////////////////////////////////
//Comments: https://d2l.sdbor.edu/d2l/lms/dropbox/user/folder_submit_files.d2l?db=884426&grpid=0&isprv=0&bp=0&ou=1453155
// https://www.cs.usfca.edu/~galles/visualization/StackArray.html
///////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int *resize(int *ptr, int *sizePtr);
void printStack();

int main()
{
    int programRunning = 1, size = 0, menuChoice, userInput;
    int *stackPtr = (int *)malloc(sizeof(int) * 1);

    printf("\nWelcome to the stack program!\n");

    while (programRunning == 1)
    {
        printf("\n1.) Add a new value to the stack.\n2.) Process a node on the stack.\n3.) Quit.\n\n");

        if (size == 0)
            printf("The stack is currently empty.\n");
        else
        {
            printf("Current stack:\n");
            for (int i = 0; i < size; i++)
                printf("%d\t", stackPtr[i]);
        }

        printf("\nWhat would you like to do? ");
        scanf("%d", &menuChoice);

        switch (menuChoice)
        {
        case 1: //Add new value.
            printf("Please enter a value to place onto the stack: ");
            scanf("%d", &userInput);
            size++;
            stackPtr = (int *)realloc(stackPtr, sizeof(int) * size);
            stackPtr[size - 1] = userInput;
            printf("stackPtr[size (%d)] = %d\n\n", size, stackPtr[size-1]);
            break;

        case 2: //Print top node on stack.
            printf("Processing stack[%d] = %d\n", size, stackPtr[size-1]);
            break;

        case 3: //Quit.
            programRunning = 0;
            printf("Goodbye!");
            free(stackPtr);
            break;

        default: //Error. temporarily a debug menu thing.
            // printf("Error. Please enter a valid choice.");
            printf("stackPtr[0] = %d\n", stackPtr[0]);
            printf("stackPtr[1] = %d\n", stackPtr[1]);
            printf("stackPtr[2] = %d\n", stackPtr[2]);
            printf("stackPtr[3] = %d\n", stackPtr[3]);
            printf("stackPtr[4] = %d\n", stackPtr[4]);
            break;
        }
    }

    return 0;
}

int *resize(int *ptr, int *sizePtr)
{

    return 0;
}

void printStack(int *stack, int *sizePtr)
{
    // if ((stack == NULL) || (stack == 0) || (*stack == 0))
    if (*sizePtr == 0)
    {
        printf("The stack is currently empty.\n");
    }
    else
    {
        printf("Current stack:\n");
        for (int i = 0; i < *sizePtr; i++)
            printf("%d\t", stack[i]);
    }
}