#ifndef LinkedList_h
#define LinkedList_h

#include <stdio.h>  //For NULL.
#include <stdlib.h> //For malloc.

typedef struct
{
    int data;
    struct node *next;
} node;

//head is the beginning of our linked list.
//d is the data to put in our newNode.
//index is where we want to insert the new node.
//size is how big our linked list is.
node *insertNode(node *head, int d, int index, int size)
{
    //If there is one node in the list, then size = 1.
    //If size is zero, and index is zero, that's OK.
    if (index > size)
    {
        printf("%d is too big, our list size is %d.\n", index, size);
        return head;
    }

    node *newNode = (node *)malloc(sizeof(node));
    newNode->data = d;
    newNode->next = NULL;

    //Check if we're inserting at the head node.
    if (index == 0)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }

    //Inserting at index, need to stop short by one.
    node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

void printList(node *head)
{
    if ((head == NULL))
        printf("The queue is currently empty.\n");

    while (head != NULL)
    {
        printf("%d  ", head->data);
        head = head->next;
    }
    printf("\n");

    free(head);
}

//Indexes start at zero (at the head).
node *deleteNode(node *head, int index, int size)
{
    if (index >= size)
    {
        printf("Index %d is too large for size %d.\n", index, size);
        return head;
    }
    else if (index == 0) //Check if deleting the first node.
    {
        node *deletePtr = head;
        head = head->next;
        free(deletePtr);
        return head;
    }
    else
    {
        //Traverse one short of where to delete.
        node *temp = head;
        for (int i = 0; i < index - 1; i++)
            temp = temp->next;

        node *deletePtr = temp->next;
        temp->next = deletePtr->next;
        free(deletePtr);
        return head;
    }
}

//Insert in queue.
node *enqueue(node *head, int d, int size)
{
    node *newNode = (node *)malloc(sizeof(node)); //Get more space somewhere for more nodes.
    newNode->data = d;
    newNode->next = NULL;

    //Check if we're inserting at the head node.
    if (size == 0)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }

    //Inserting at max size, need to stop short by one.
    node *temp = head;
    for (int i = 0; i < size - 1; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

//Delete.
node *dequeue(node *head, int *valuePtr, int size)
{
    if (size < 0)
    {
        printf("ERROR. Size cannot be less than 0. Size specified: %d.\n", size);
        return NULL;
    }

    node *deletePtr = head;
    *valuePtr = deletePtr->data;

    head = head->next;

    free(deletePtr);
    return head;
}

node *search(node *head, int valueToSearchFor)
{
    node *searchNode = (node *)malloc(sizeof(node)); //Get more space somewhere for more nodes.
    searchNode = head;

    if (head->data == valueToSearchFor) //Check if head value is what we want.
        return searchNode;

    for (int i = 0; i <= valueToSearchFor; i++)
    {
        searchNode = searchNode->next;
        if (searchNode->data == valueToSearchFor)
        {
            return searchNode;
        }
    }

    free(searchNode);
    return NULL;
}

#endif