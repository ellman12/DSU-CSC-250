///////////////////////////////////////////////////////////////////////
//File: Structures Example 1.c
///////////////////////////////////////////////////////////////////////
//Purpose: In-class example.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Created: Monday, September 28, 2020.
///////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    int hitpoints;
    int damage;
} GameCharacter;

void initCharacter(GameCharacter allCharacters[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("Enter character %d's name: ", i + 1);
        scanf("%s", allCharacters[i].name);

        allCharacters[i].hitpoints = 100; //Default value of 100 health.

        printf("What is their attack damage? ");
        scanf("%d", &allCharacters[i].damage); //Yes & because a single interger needs to be referenced.
    }
}

int main()
{
    GameCharacter allCharacters[3];
    initCharacter(allCharacters, 3);

    return 0;
}