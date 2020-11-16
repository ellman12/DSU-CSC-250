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
        printf("%d\t", numbers[i]);
    printf("\n\n");
}

void fillArrayRandNums(int numbers[], int size)
{
    for (i = 0; i < size; i++)
        numbers[i] = (rand() % (MAX + 1 - MIN) + MIN);
    printf("Array has been filled with random numbers.\n\n");
}

void selectionSort(int numbers[], int size)
{
    printf("Array is getting sorted by selection sorting.\n\n");

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
    printf("Selection sorting done.\n\n");
}

void bubbleSort(int numbers[], int size)
{
    printf("Array is getting sorted by bubble sorting.\n\n");

    int flag = 0; //0 means not sorted, 1 means it is sorted MAYBE.
    do
    {
        int i = 0;
        flag = 1;
        while (i < size - 1)
        {
            if (numbers[i] > numbers[i + 1])
            {
                // Swap values at i and i+i
                swap(&numbers[i], &numbers[i + 1]);
                flag = 0;
            }
            i++;
        }
    } while (flag == 0);
    printf("Bubble sorting done.\n\n");
}

int main()
{
    srand(time(NULL));

    fillArrayRandNums(numbers, size);
    printArray(numbers, size);

    selectionSort(numbers, size);
    printArray(numbers, size);

    fillArrayRandNums(numbers, size);
    bubbleSort(numbers, size);
    printArray(numbers, size);

    return 0;
}