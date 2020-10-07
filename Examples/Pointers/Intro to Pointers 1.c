///////////////////////////////////////////////////////////////////////
//File: Intro to Pointers.c
///////////////////////////////////////////////////////////////////////
//Purpose: In-class example.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Created: Wednesday, October 7, 2020.
///////////////////////////////////////////////////////////////////////
#include <stdio.h>

int main()
{
    int x, y;
    int *ptr = &x;
    double myDouble;
    double *dptr = &myDouble;

    printf("The memory address for x is %p and y is %p\n", ptr, &y);
    printf("The size of a double is %d bytes, but the size of its pointer is %d bytes.\n", sizeof(myDouble), sizeof(dptr));

    return 0;
}