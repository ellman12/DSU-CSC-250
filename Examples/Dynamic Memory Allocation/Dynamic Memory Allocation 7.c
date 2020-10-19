///////////////////////////////////////////////////////////////////////
//Purpose: Memory leak example.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Created: Monday, October 19, 2020 11:36 AM
///////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h> //For malloc

int main()
{
    int *ptr1, *ptr2;

    ptr1 = (int *)malloc(sizeof(int));
    ptr2 = (int *)malloc(sizeof(int));

    printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);

    *ptr2 = 42;
    *ptr1 = 100;
    ptr1 = ptr2; //BAD. Both are looking at the same memory address.

    printf("ptr1 = %p, ptr2 = %p\n", ptr1, ptr2);

    printf("I want 100, I'm getting %d\n", *ptr1);
    return 0;
}