///////////////////////////////////////////////////////////////////////
//File: Intro to Pointers HW.c
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Due Date: Oct. 19th 11:00 AM.
///////////////////////////////////////////////////////////////////////
//Created: Friday, October 9, 2020 11:44 AM.
///////////////////////////////////////////////////////////////////////
//Comments: https://d2l.sdbor.edu/d2l/lms/dropbox/user/folder_submit_files.d2l?db=882288&grpid=0&isprv=0&bp=0&ou=1453155
///////////////////////////////////////////////////////////////////////
#include <stdio.h>

void functionOne()
{
    int intVar;
    char charVar;
    float floatVar;

    int *intVarPtr = &intVar;
    char *charVarPtr = &charVar;
    float *floatVarPtr = &floatVar;

    printf("Memory addresses of int, char, and float vars: %p, %p, and %p.\n\n", intVarPtr, charVarPtr, floatVarPtr);

    *intVarPtr = 10;
    *charVarPtr = 'A';
    *floatVarPtr = 3.14;
    printf("Values of int, char, and float vars: %d, %c, and %f.\n\n", intVar, charVar, floatVar);

    printf("Please enter a new value for the int variable.\n");
    scanf("%d", intVarPtr);

    printf("Please enter a new value for the char variable.\n");
    scanf(" %c", charVarPtr);

    printf("Please enter a new value for the float variable.\n");
    scanf("%f", floatVarPtr);

    printf("New values of int, char, and float vars: %d, %c, and %f.\n", intVar, charVar, floatVar);
}

void functionTwo()
{
    int intVar;
    char charVar;
    float floatVar;

    void *vp = &intVar;
    printf("Memory address for int var is: %p\n", vp);
    *((int *)vp) = 10;
    printf("Value of int var: %d\n", intVar);
    printf("Enter a new int value:\n");
    scanf("%d", vp);
    printf("New value is: %d\n\n", intVar);

    vp = &charVar;
    printf("Memory address for char var is: %p\n", vp);
    *((char *)vp) = 'A';
    printf("Value of char var: %c\n", charVar);
    printf("Enter a new char value:\n");
    scanf(" %c", vp);
    printf("New value is: %c\n\n", charVar);

    vp = &floatVar;
    printf("Memory address for float var is: %p\n", vp);
    *((float *)vp) = 3.14;
    printf("Value of float var: %f\n", floatVar);
    printf("Enter a new float value:\n");
    scanf("%f", vp);
    printf("New value is: %f\n\n", floatVar);
}

void functionThree()
{
}

int main()
{
    // functionOne();
    functionTwo();
    // functionThree();
    return 0;
}