#ifndef CALC_H
#define CALC_H

float pi = 3.14159;

static float sum(float array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}

float ave(float array[], int size)
{
    float result;
    result = sum(array, size) / size;
    return result;
}

#endif