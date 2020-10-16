///////////////////////////////////////////////////////////////////////
//Purpose: In-class example.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Created: Friday, October 16, 2020 11:41 AM.
///////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h> //For malloc

int main()
{
    int size;
    printf("How many elements do you want in your array? ");
    scanf("%d", &size);

    int *array = (int *)malloc(sizeof(sizeof(int) * size));
    for (int i = 0; i < size; i++) {
        printf("Enter a new integer: ");
        scanf("%d", &array[i]);

        printf("You entered %d.\n\n", array[i]);
    }

    return 0;
}