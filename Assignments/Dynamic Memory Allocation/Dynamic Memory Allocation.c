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

// TODO: ask tom about ptr[];

int main()
{
    int programRunning = 1, size = 0, menuChoice, userInput;
    int *stackPtr = (int *)malloc(sizeof(int) * 1);

    printf("Welcome to stack program!");

    while (programRunning == 1)
    {
        printf("\nWould you like to:\n1.) Add a new value to the stack.\n2.) Process a node on the stack.\n3.) Quit.\n\n");
        printStack(stackPtr, &size);
        printf("\n>");
        scanf("%d", &menuChoice);

        switch (menuChoice)
        {
        case 1: //Add new value.
            printf("Please enter a value to place onto the stack: ");
            scanf("%d", &userInput);
            size++;
            stackPtr = (int *)realloc(stackPtr, sizeof(int) * size);
            *stackPtr = userInput;
            printf("temp. stack[%d] = %d\n", size, *stackPtr);
            break;

        case 2: //Print top node on stack.
            printf("Processing stack[%d] = %d\n", size, *stackPtr);
            break;

        case 3: //Quit.
            programRunning = 0;
            printf("Goodbye!");
            free(stackPtr);
            break;

        default: //Error.
            printf("Error. Please enter a valid choice.");
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
    if ((stack == NULL) || (stack == 0) || (*stack == 0))
    {
        printf("The stack is currently empty.\n");
    }
    else
    {
        printf("Current stack: ");
        printf("stack[%d] = %d\n", *sizePtr, *stack);
        for (int i = 0; i < *sizePtr; i++)
        {
            printf("%d\t", stack[i]);
        }
    }
}