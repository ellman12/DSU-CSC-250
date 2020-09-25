///////////////////////////////////////////////////////////////////////
//File: Structures.c
///////////////////////////////////////////////////////////////////////
//Purpose: Structures in-class example
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Created: Friday, September 25, 2020.
///////////////////////////////////////////////////////////////////////
//Comments:
///////////////////////////////////////////////////////////////////////
#include <stdio.h>

typedef struct
{
    char name[50];
    char color[10];
    int height_cm;
    float weight_kg;
} kitty;

int main()
{
    // kitty cat;
    // printf("%s", cat.name);

    // kitty k1, k2, k3;
    // kitty kats[3];

    kitty k1 = {"Stormy", "Black", 40, 4};
    kitty k2 = k1;

    printf("The cat's name is %s. He is %s and is %d cm tall and weighs %.1f kgs.\n", k1.name, k1.color, k1.height_cm, k1.weight_kg);
    printf("The cat's name is %s. He is %s and is %d cm tall and weighs %.1f kgs.\n", k2.name, k2.color, k2.height_cm, k2.weight_kg);


    return 0;
}