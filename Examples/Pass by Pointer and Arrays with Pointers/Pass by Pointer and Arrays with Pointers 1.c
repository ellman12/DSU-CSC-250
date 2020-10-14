///////////////////////////////////////////////////////////////////////
//Purpose: In-class example.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Created: Wednesday, October 14, 2020 11:04 AM.
///////////////////////////////////////////////////////////////////////
#include <stdio.h>

void changeX(int *memOfX)
{
    printf("memOfX = %p\n", memOfX);
    printf("What would you like to change x to? ");
    scanf("%d", memOfX);
}

int main()
{
    int x;

    printf("In main, &x = %p\n", &x);
    changeX(&x);
    printf("At the end of the program, x is %d.\n", x);
    return 0;
}