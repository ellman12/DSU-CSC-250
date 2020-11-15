///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Due Date: Nov 20, 2020 11:00 AM
///////////////////////////////////////////////////////////////////////
//Created: Saturday, November 14, 2020 9:15 PM.
///////////////////////////////////////////////////////////////////////
//Comments: https://d2l.sdbor.edu/d2l/lms/dropbox/user/folder_submit_files.d2l?db=890889&grpid=0&isprv=0&bp=0&ou=1453155
///////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <time.h>   //For time
#include <stdlib.h> // For srand and rand

const int MIN = 0, MAX = 100, size = 10;
int i, j, smallestSoFar, numbers[10];

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printArray(int numbers[], int size)
{
    for (i = 0; i < size; i++)
        printf("numbers[%d] = %d\n", i, numbers[i]);
    printf("\n");
}

void fillArray(int numbers[], int size)
{
    //TODO:.................change this back to rand!
    for (i = 0; i < size; i++)
    {
        // numbers[i] = i + 1;
        numbers[i] = (rand() % (MAX + 1 - MIN) + MIN);
    }
}

void selectionSort(int numbers[], int size)
{
    for (i = 0; i < size - 1; i++)
    {
        j = i;
        smallestSoFar = numbers[j];

        for (j = 0; j < size; j++)
        {
            if (numbers[j] < numbers[smallestSoFar])
                smallestSoFar = j;
        }

        // swap(&numbers[i], &numbers[smallestSoFar]);
        int temp = numbers[smallestSoFar];
        numbers[i] = numbers[smallestSoFar];
        numbers[smallestSoFar] = temp;
    }
}

void bubbleSort(int numbers[], int size)
{
}

int main()
{
    srand(time(NULL));

    fillArray(numbers, size);
    printArray(numbers, size);

    selectionSort(numbers, size);
    printArray(numbers, size);

    // bubbleSort(numbers);
    // printArray(numbers);

    return 0;
}