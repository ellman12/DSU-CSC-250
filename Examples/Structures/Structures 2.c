///////////////////////////////////////////////////////////////////////
//File:
///////////////////////////////////////////////////////////////////////
//Purpose: another example
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Created: Friday, September 25, 2020.
///////////////////////////////////////////////////////////////////////
//Comments:
///////////////////////////////////////////////////////////////////////
#include <stdio.h>

typedef struct bb_player
{
    char name[20];
    int pointsPerGame[26]; //26 games in a season
} bb_player;

int main()
{

    bb_player player = {"Michael Jordan", {40, 36, 41, 37}};
    player.pointsPerGame[4] = 56;

    for (int i = 0; i < 26; i++)
        printf("For Game %d, %s had %d\n", i + 1, player.name, player.pointsPerGame[i]);

    return 0;
}