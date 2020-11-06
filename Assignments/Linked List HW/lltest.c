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
    // int* valuePtr = (int*)malloc(sizeof(int));
    // head = dequeue(head, valuePtr);

    int value;
    // head = dequeue(head, &value);

    node *head = NULL;
    int i, data, userInput, numOfValues, size = 0;
    printf("How many values would you like to add? ");
    scanf("%d", &numOfValues);
    printf("\n");

    for (i = 0; i < numOfValues; i++) //add values
    {
        printf("Enter a number:\n");
        scanf("%d", &userInput);
        //enqueue
        //print out entre queue
    }

    for (i = 0; i < 3; i++) //dequeue (remove) 3 values
    {                       //TODO: Print the list after each dequeue and print out the contents of valuePtr in the main function.
    }

    for (i = 0; i < 5; i++) //add values
    {
        printf("Enter a number:\n");
        scanf("%d", &userInput);
        //enqueue
        //print out entre queue
    }

    //TODO: Allow the user to enter in a value to search for two times. Using the search function, determine if the item is in the list.
    // If the value is in the list, return the node* back to the main function and print out the memory address of the node and also the integer value it contains.
    // If the value is not in the list, then return NULL. Back in the main function, print out an error message stating the value was not found.

    return 0;
}