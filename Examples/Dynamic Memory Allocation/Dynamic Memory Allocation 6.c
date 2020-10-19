///////////////////////////////////////////////////////////////////////
//Purpose: In-class example.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Created: Monday, October 19, 2020 11:05 AM
///////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h> //For malloc

int main()
{
    // int i;
    // int *ptr;
    //BAD
    // for (i = 0; i < 10; i++)
    // {
    //     ptr = (int *)malloc(sizeof(int)); // <-- MEMORY LEAK
    //     printf("ptr = %p\n", ptr);
    //     *ptr = i;
    // }

    // int i;
    // int *ptr;
    //GOOD(?)
    // for (i = 0; i < 10; i++)
    // {
    //     ptr = (int *)malloc(sizeof(int));
    //     printf("ptr = %p\n", ptr);
    //     *ptr = i;
    //     free(ptr);
    // }

    //GOOD
    int i;
    int *ptr = NULL;
    printf("ptr before malloc is %p\n", ptr);
    for (i = 0; i < 10; i++)
    {
        if (ptr == NULL)
        {
            ptr = (int *)malloc(sizeof(int));
        }

        printf("ptr = %p\n", ptr);
        *ptr = i;
    }

    free(ptr);
    ptr = NULL;

    return 0;
}