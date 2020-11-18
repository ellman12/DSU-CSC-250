///////////////////////////////////////////////////////////////////////
//Purpose: In-class example.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Created: Wednesday, November 18, 2020 11:02 AM.
///////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
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

int binarySearch(int array[], int size, int key)
{
    int left = 0;
    int right = size - 1;
    int mid;

    while (left <= right)
    {
        mid = ((left + right) / 2);
        if (array[mid] == key)
            return mid;
        else if (array[mid] > key)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int main()
{
    int array[20];
    int key, size = 20;

    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 101;
    }

    // insertion_sort(array);
    bubbleSort(array, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d   ", array[i]);
    }
    printf("\n");
    printf("Which value would you like to search for: ");
    scanf("%d", &key);

    int result = binarySearch(array, size, key);
    if (result == -1)
        printf("%d could not be found.\n", key);
    else
        printf("%d was found at index %d.\n", key, result);

    return 0;
}