///////////////////////////////////////////////////////////////////////
//Purpose:
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Due Date:
///////////////////////////////////////////////////////////////////////
//Created: Friday, October 23, 2020 6:31 PM.
///////////////////////////////////////////////////////////////////////
//Comments:
///////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 1, menuChoice;
    int *stack = (int *)malloc(sizeof(int) * size);

    printf("Welcome to stack program! Would you like to:\n1.) Add a new value to the stack.\n2.) Process a node on the stack.3.) Quit.\n\n");
    scanf("%d", &menuChoice);

    switch (menuChoice)
    {
    case 1:
        size++;
        stack = (int *)realloc(stack, sizeof(int) * size);
        break;

    case 2:
        if ((stack[0] = NULL) || (stack[0] = 0))
        {
            printf("The stack is currently empty.\n");
            break;
        } else {
        printf("Which ");
        }
        break;

    case 3:
        printf("Goodbye!");
        free(size);
        free(menuChoice);
        free(stack);
        exit(0);
        break;

    default:
        printf("Error. Please enter a valid choice.");
        break;
    }

    return 0;
}