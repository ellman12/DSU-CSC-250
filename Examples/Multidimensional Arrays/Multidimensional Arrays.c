///////////////////////////////////////////////////////////////////////
//File: Multidimensional Arrays.c
///////////////////////////////////////////////////////////////////////
//Purpose: In-class example demonstrating Multidimensional Arrays.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Created: Monday, September 14, 2020.
///////////////////////////////////////////////////////////////////////
//Comments:
///////////////////////////////////////////////////////////////////////
#include <stdio.h>  //printf & scanf
#include <time.h>   //time()
#include <stdlib.h> //srand() and rand()

void fillAndPrintArray(int myArray[5][2][8][4], int dim1, int dim2, int dim3, int dim4)
{
    int min = 0, max = 100;
    int i, j, k, l;
    for (i = 0; i < dim1; i++)
    {
        for (j = 0; j < dim2; j++)
        {
            for (k = 0; k < dim3; k++)
            {
                for (l = 0; l < dim4; l++)
                {
                    myArray[i][j][k][l] = rand() % (max + 1 - min) + min; //Assign random integer.
                    printf("array[%d][%d][%d][%d] = %d\n", i, j, k, l, myArray[i][j][k][l]);
                }
                printf("\n");
            }
        }
    }
}

int main()
{
    srand(time(NULL)); //Set seed for "random" number generation.
    int array[5][2][8][4];

    fillAndPrintArray(array, 5, 2, 8, 4);

    return 0;
}