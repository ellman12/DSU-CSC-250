///////////////////////////////////////////////////////////////////////
//Purpose: In-class example.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Created: Friday, October 16, 2020 11:19 AM.
///////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h> //For malloc
#include <string.h> //For strcpy

typedef struct
{
    char name[20];
    int id;
    float gpa;
} student;

int main()
{
    student *sPtr = (student *)malloc(sizeof(student));
    student test;

    //These function the same.
    sPtr->gpa = 4.0;
    // *(sPtr.id) = 12345; //A different way of doing '->'. Doesn't seem to work (compile) anymore...?
    sPtr->id = 12345;
    strcpy(sPtr->name, "Elliott");

    printf("The student is %s, their id number is %d, and they have a gpa of %.2f.\n", sPtr->name, sPtr->id, sPtr->gpa);

    return 0;
}