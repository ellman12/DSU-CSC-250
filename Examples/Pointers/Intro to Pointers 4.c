///////////////////////////////////////////////////////////////////////
//File: Intro to Pointers 4.c
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
    int x,y;
    int * ptr;

    printf("The memory address in ptr is %p\n", ptr);

    *ptr = 10;

    printf("We just dereferenced ptr and it is equal to %d\n", *ptr);

    return 0;
}