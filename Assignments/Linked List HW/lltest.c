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
    int *valuePtr = (int *)malloc(sizeof(int));
    int d, userInput, size = 0;
    node *head = NULL, *foundNode = NULL;
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
        printf("Queue contents:\n");
        printList(head);
        printf("\n");
    }

    printf("How many values would you like to remove? ");
    scanf("%d", &userInput);
    printf("\n");

    for (int i = 0; i < userInput; i++)
    {
        size--;
        head = dequeue(head, valuePtr, size);
        if (head == NULL)
        {
            printf("Error when deleting.\n");
            continue;
        }
        
        printf("The value %d was just deleted.\n", *valuePtr);
        printf("Queue contents:\n");
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
        printf("Queue contents:\n");
        printList(head);
        printf("\n");
    }

    printf("You can search for 2 values in the queue.\n");
    for (int i = 0; i < 2; i++)
    {
        printf("What is one value you want to search for? ");
        scanf("%d", &userInput);
        printf("\n");

        foundNode = search(head, userInput);
        if (foundNode == NULL)
            printf("The node was not found.\n\n");
        else
        {
            printf("The node has been found! It contains %d at address %p.\n", foundNode->data, &foundNode);
        }
    }

    free(head);
    free(foundNode);
    return 0;
}