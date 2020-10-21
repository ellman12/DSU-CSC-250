///////////////////////////////////////////////////////////////////////
//Purpose: In-class example.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Created: Wednesday, October 21, 2020 11:46 AM.
///////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h> //For malloc and realloc.

int *resize(int *ptr, int *sizePtr)
{
    printf("How many integers would you like the array to be now? ");
    scanf("%d", sizePtr);
    ptr = (int *)realloc(ptr, sizeof(int) * (*sizePtr));
    printf("ptr = %p\n", ptr);
    return ptr;
}

int main()
{
    int array[10];
    int *ptr = realloc(array, sizeof(int) * 100);
    printf("ptr[0] = %p, array = %p\n", ptr, array); //Trying to access null pointer.
    free(array); //Doesn't do anything.
    return 0;
}