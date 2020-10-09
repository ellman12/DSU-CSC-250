///////////////////////////////////////////////////////////////////////
//Purpose: In-class example.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Created: Friday, October 9, 2020 11:03 AM.
///////////////////////////////////////////////////////////////////////
#include <stdio.h>

int main()
{
    int x = 100;
    float f = 3.14;
    char c = 'A';

    void *vp = &x;
    printf("x as an integer is: %d\n", *(int *)vp);

    vp = &f;
    printf("f is %f\n", *(float *)vp);

    vp = &c;
    printf("c is %c\n", *(char *)vp);

    int* pointer;
    *pointer = 5;
    printf("After bad dereference, %p", pointer);

    return 0;
}