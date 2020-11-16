///////////////////////////////////////////////////////////////////////
//Purpose: In-class example.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Created: Monday, November 16, 2020 11:02 AM.
///////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h> //For rand

void fillArray(int array[], int size)
{
    int min = 0;
    int max = size * 10;
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % (max + 1 - min) + min;
    }
}

int linearSortedSearch(int array[], int size, int key)
{
    int returnVal = -1;

    for (int i = 0; i < size && array[i] <= key; i++)
    {
        if (array[i] == key)
        {
            return i;
        }
    }
    return returnVal;
}

int main() //Not sure why but this doesn't work... :/
{

    int i, index, indexSum = 0, size = 100, numOfSims = 1000, array[100];

    for (int i = 0; i < numOfSims; i++)
    {
        fillArray(array, size);
        indexSum = linearSortedSearch(array, size, rand() % 1001);
        if (index == -1)
            indexSum += linearSortedSearch(array, size, rand() % 1001);
        else
            indexSum += index;
    }
    printf("Average index is %f\n", (float)indexSum / numOfSims);

    return 0;
}