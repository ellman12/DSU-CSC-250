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

const int MIN = 0, MAX = 100, ARRAY_SIZE = 10;
int numbers[10];

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void printArray(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d\t", numbers[i]);
    printf("\n\n");
}

void fillArrayRandNums(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
        numbers[i] = (rand() % (MAX + 1 - MIN) + MIN);
    printf("Array has been filled with random numbers.\n\n");
}

void selectionSort(int numbers[], int size)
{
    printf("Array is getting sorted by selection sorting.\n\n");

    int startIndex;         //Index where comparison is starting.
    int compareIndex;       //Indices after startIndex that are compared to startIndex. If smaller, they swap.
    int smallestIndexSoFar; //When checking for smaller values, this stores the index of the smallest value found thus far.

    //1. Start at beginning of list (0). 5. Continue until 2nd to last item.
    for (startIndex = 0; startIndex < ARRAY_SIZE - 1; startIndex++)
    {
        compareIndex = startIndex;
        smallestIndexSoFar = startIndex;

        //2. Check every item after current index. Constantly updating, if necessary, the index of the smallest value.
        for (compareIndex = startIndex + 1; compareIndex < ARRAY_SIZE; compareIndex++)
        {
            //3. Swap places with smallest item found.
            if (numbers[compareIndex] < numbers[smallestIndexSoFar])
                smallestIndexSoFar = compareIndex;
        }
        swap(&numbers[startIndex], &numbers[smallestIndexSoFar]);
        //4. Move to next index (1) and repeat.
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

    //Initialize
    fillArrayRandNums(numbers, ARRAY_SIZE);
    printArray(numbers, ARRAY_SIZE);

    //Selection sort
    selectionSort(numbers, ARRAY_SIZE);
    printArray(numbers, ARRAY_SIZE);

    //Bubble sort
    fillArrayRandNums(numbers, ARRAY_SIZE);
    printArray(numbers, ARRAY_SIZE);
    bubbleSort(numbers, ARRAY_SIZE);
    printArray(numbers, ARRAY_SIZE);

    return 0;
}