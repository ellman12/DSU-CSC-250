///////////////////////////////////////////////////////////////////////
//Purpose: In-class example.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Created: Wednesday, October 14, 2020 11:24 AM.
///////////////////////////////////////////////////////////////////////
#include <stdio.h>

void changeArray(int *array)
{
    for (int i = 0; i < 10; i++)
        array[i] = i;
}

int main()
{
    int array[10];

    printf("array = %p\n", array);        //Original Address.
    printf("array[0] = %p\n", &array[0]); // Original Address.
    printf("array[1] = %p\n", &array[1]); // Original Address + 4 bytes.
    printf("array[9] = %p\n\n\n", &array[9]); // Original Address + 36 bytes.

    changeArray(array);

    for (int i = 0; i < 10; i++)
        printf("array[%d] = %d\n", i, array[i]);

    return 0;
}