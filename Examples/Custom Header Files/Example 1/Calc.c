///////////////////////////////////////////////////////////////////////
//Purpose: In-class example.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Created: Friday, October 23, 2020 11:26 AM.
///////////////////////////////////////////////////////////////////////
#include "Calc.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *array;
    int size;

    printf("How many numbers would you like to enter? ");
    scanf("%d", &size);
    array = (float *)malloc(sizeof(float) * size);

    for (int i = 0; i < size; i++) {
        printf("Please enter a new value: ");
        scanf("%f", &array[i]);
        // printf("You read in %f into the array.\n\n", array[i]);
    }

    float total = sum(array, size);
    printf("The total is %f.\n", total);

    float average = ave(array, size);
    printf("The average of the numbers is %f.", average);

    return 0;
}