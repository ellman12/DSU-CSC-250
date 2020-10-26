///////////////////////////////////////////////////////////////////////
//Purpose: Homework for dynamic memory allocation.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Due Date: Oct. 30th.
///////////////////////////////////////////////////////////////////////
//Created: Friday, October 23, 2020 6:31 PM.
//Finished:
///////////////////////////////////////////////////////////////////////
//Comments: https://d2l.sdbor.edu/d2l/lms/dropbox/user/folder_submit_files.d2l?db=884426&grpid=0&isprv=0&bp=0&ou=1453155
// https://www.cs.usfca.edu/~galles/visualization/StackArray.html
///////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h> //Malloc and realloc.

int *resize(int *ptr, int *sizePtr);
void printStack();

int main()
{
    int programRunning = 1, size = 0, menuChoice, userInput;
    int *stackPtr = (int *)malloc(sizeof(int));

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

        printf("\n\nWhat would you like to do?\n> ");
        scanf("%d", &menuChoice);

        switch (menuChoice)
        {
        case 1: //Add new value.
            printf("Please enter a value to place onto the stack: ");
            scanf("%d", &userInput);
            size++;
            stackPtr = (int *)realloc(stackPtr, sizeof(int) * size);
            stackPtr[size - 1] = userInput;
            printf("%d has been added to the stack at index %d.\n\n", stackPtr[size - 1], size - 1);
            break;

        case 2: //Print and then pop top node on stack.
            if ((size == 0))
                printf("The stack is currently empty.\n");
            else
            {
                printf("Now processing %d\n\n", stackPtr[size - 1]);
                size--;
                stackPtr = (int *)realloc(stackPtr, sizeof(int) * size);
                printf("That value has been removed from the top of the stack.");
            }
            break;

        case 3:
            printf("Goodbye!");
            free(stackPtr);
            programRunning = 0;
            break;

        default:
            printf("\nError. Please enter a valid choice.\n\n");
            break;
        }
    }

    return 0;
}

// int *resize(int *ptr, int *sizePtr)
// {

//     return 0;
// }

// void printStack(int *stack, int *sizePtr)
// {
//     // if ((stack == NULL) || (stack == 0) || (*stack == 0))
//     if ((*sizePtr == 0) || stack[*sizePtr])
//         printf("The stack is currently empty.\n");
//     else
//     {
//         printf("Current stack:\n");
//         for (int i = 0; i < *sizePtr; i++)
//             printf("%d\t", stack[i]);
//     }
// }