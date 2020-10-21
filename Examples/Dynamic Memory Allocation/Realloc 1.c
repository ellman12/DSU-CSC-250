///////////////////////////////////////////////////////////////////////
//Purpose: In-class example.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Created: Wednesday, October 21, 2020 11:17 AM.
///////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h> //For malloc and realloc.

int main()
{
    int size = 10;
    int *ptr = (int *)malloc(sizeof(int) * size);
    printf("ptr = %p\n", ptr);

    for (int i = 0; i < size; i++)
    {
        ptr[i] = i;
        printf("%d\t", ptr[i]);
    }
    printf("\nHow many integers would you like the array to be now? ");
    scanf("%d", &size);

    ptr = (int *)realloc(ptr, sizeof(int) * size);
    printf("ptr = %p\n", ptr);
    for (int i = 0; i < size; i++)
    {
        // ptr[i] = i; //Contains garbage without.
        printf("%d\t", ptr[i]);
    }
    printf("\n");
    return 0;
}