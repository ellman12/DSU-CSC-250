///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Due Date: Nov. 13th
///////////////////////////////////////////////////////////////////////
//Created: Friday, November 6, 2020 11:21 AM.
///////////////////////////////////////////////////////////////////////
//Comments: https://d2l.sdbor.edu/d2l/lms/dropbox/user/folder_submit_files.d2l?db=888769&grpid=0&isprv=0&bp=0&ou=1453155
///////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include "LinkedList.h"

int main()
{
    // int *valuePtr = (int *)malloc(sizeof(int));
    // head = dequeue(head, valuePtr);

    // head = dequeue(head, &value);

    int d, userInput, size = 0;
    node *head = NULL;
    printList(head);

    printf("How many values would you like to add? ");
    scanf("%d", &userInput);
    printf("\n");

    for (int i = 0; i < userInput; i++)
    {
        printf("Enter a value: ");
        scanf("%d", &d);

        head = enqueue(head, d, size);
        size++; //This ha to be after enqueue so it inserts at index 0.
        printf("\nQueue contents:\n");
        printList(head);
        printf("\n");
    }

    printf("How many values would you like to remove? ");
    scanf("%d", &userInput);
    printf("\n");

    for (int i = 0; i < userInput; i++)
    {
        size--; //When removing nodes, and when you try and remove more nodes than there are, the program crashes when this line is after dequeue()🤔
        head = dequeue(head, size);
        printf("\nQueue contents:\n");
        printList(head);
        printf("\n");
    }

    printf("How many more values would you like to add? ");
    scanf("%d", &userInput);
    printf("\n");

    for (int i = 0; i < userInput; i++)
    {
        printf("Enter a value: ");
        scanf("%d", &d);

        head = enqueue(head, d, size);
        size++;
        printf("\nQueue contents:\n");
        printList(head);
        printf("\n");
    }

    printf("You can now search for 2 values in the queue.\n");
    printf("What is the first value you want to search for? ");
    scanf("%d", &userInput);
    printf("\n");

    //TODO: Do search stuff here.

    printf("What is the second value you want to search for? ");
    scanf("%d", &userInput);
    printf("\n");

    //TODO: Do search stuff here.

    //TODO: Allow the user to enter in a value to search for two times. Using the search function, determine if the item is in the list.
    // If the value is in the list, return the node* back to the main function and print out the memory address of the node and also the integer value it contains.
    // If the value is not in the list, then return NULL. Back in the main function, print out an error message stating the value was not found.

    free(head);
    return 0;
}