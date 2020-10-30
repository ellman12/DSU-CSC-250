#ifndef LinkedList_h
#define LinkedList_h

#include <stdio.h>  //For NULL.
#include <stdlib.h> //For malloc.

typedef struct
{
    int data;
    struct node *next;
} node;

// head is the beginning of our linked list.
// d is the data to put in our newNode.
// index is where we want to insert the new node.
// size is how big our linked list is.
node *insertNode(node *head, int d, int index, int size)
{
    // If there is one node in the list, then size = 1.
    // If size is zero, and index is zero, that's OK.
    if (index > size)
    {
        printf("%d is too big, our list size is %d.\n", index, size);
        return head;
    }

    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = d;
    newNode->next = NULL;

    // Check if we're inserting at the head node.
    if (index == 0)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }
}

#endif