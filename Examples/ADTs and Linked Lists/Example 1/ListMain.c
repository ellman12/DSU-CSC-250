///////////////////////////////////////////////////////////////////////
//Purpose: In-class example.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Created: Wednesday, October 28, 2020 11:05 AM.
///////////////////////////////////////////////////////////////////////
#include "LinkedList.h"

int main()
{
    int n, d, index, size = 0;
    node *head = NULL;
    printf("How many values would you like to add? ");
    scanf("%d", &n);
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter a value: ");
        scanf("%d", &d);
        printf("\nWhat index would you like to insert at? ");
        scanf("%d", &index);

        head = insertNode(head, d, index, size);
        size++;
        printList(head);
    }
    return 0;
}