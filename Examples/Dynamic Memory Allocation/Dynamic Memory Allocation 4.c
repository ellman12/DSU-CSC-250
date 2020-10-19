///////////////////////////////////////////////////////////////////////
//Purpose: In-class example.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Created: Monday, October 19, 2020 11:03 AM
///////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h> //For malloc

int main()
{
    int *ptr = (int *)malloc(sizeof(int));
    printf("The memory address in ptr is %p\n", ptr);
    printf("Enter in an integer: ");
    scanf("%d", ptr);

    printf("You entered in %d\n", *ptr);

    free(ptr);
    printf("I just freed ptr\n");
    *ptr = 42;

    printf("After freeing, value in ptr is %d\n", *ptr);
    printf("The memory address in ptr is %p\n", ptr);

    return 0;
}