///////////////////////////////////////////////////////////////////////
//Purpose: In-class example.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Created: Monday, October 19, 2020 11:20 AM
///////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h> //For malloc

int main()
{
    int i, x;
    int *ptr = (int *)malloc(sizeof(int) * 20);
    for (i = 0; i < 20; i++)
    {
        ptr[i] = i * 2;
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    free(ptr); //Free just tells computer that memory address can be used; keeps stuff in memory.

    for (i = 0; i < 99999999; i++)
        x = i / 2;

    for (i = 0; i < 20; i++)
    {
        ptr[i] = i * 2;
        printf("%d\n", ptr[i]);
    }



    return 0;
}