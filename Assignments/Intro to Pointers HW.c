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

void functionOne();
void functionTwo();
void functionThree();
void functionFour();

int main()
{
    functionOne();
    functionTwo();
    functionThree();
    functionFour();
    return 0;
}

void functionOne()
{
    printf("Entering functionOne() now...\n");
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
    printf("Current values of int, char, and float vars: %d, %c, and %f.\n\n", intVar, charVar, floatVar);

    printf("Please enter a new value for the int variable.\n");
    scanf("%d", intVarPtr);

    printf("Please enter a new value for the char variable.\n");
    scanf(" %c", charVarPtr);

    printf("Please enter a new value for the float variable.\n");
    scanf("%f", floatVarPtr);

    printf("New values of int, char, and float vars: %d, '%c', and %f.\n\n", intVar, charVar, floatVar);
}

void functionTwo()
{
    printf("Entering functionTwo() now...\n");
    int intVar;
    char charVar;
    float floatVar;

    void *vp = &intVar;
    printf("Memory address for int var is: %p\n", vp);
    *((int *)vp) = 10;
    printf("Current value of int var: %d\n", intVar);
    printf("Enter a new int value:\n");
    scanf("%d", vp);
    printf("New value is: %d\n\n", intVar);

    vp = &charVar;
    printf("Memory address for char var is: %p\n", vp);
    *((char *)vp) = 'A';
    printf("Current value of char var: %c\n", charVar);
    printf("Enter a new char value:\n");
    scanf(" %c", vp);
    printf("New value is: '%c'\n\n", charVar);

    vp = &floatVar;
    printf("Memory address for float var is: %p\n", vp);
    *((float *)vp) = 3.14;
    printf("Current value of float var: %f\n", floatVar);
    printf("Enter a new float value:\n");
    scanf("%f", vp);
    printf("New value is: %f\n\n", floatVar);
}

void functionThree()
{
    printf("Entering functionThree() now...\n");
    int intVar;
    double doubleVar;
    int *intVarPtr = &intVar;
    double *doubleVarPtr = &doubleVar;
    printf("The size of an int and double var is %d bytes and %d bytes.\n", sizeof(intVar), sizeof(doubleVar));
    printf("Pointers for int and double data types needs %d bytes and %d bytes.\n", sizeof(intVarPtr), sizeof(doubleVarPtr));
    printf("All pointers have the same size because all they're really doing is pointing to a memory address, whose size varies based on whether it's a 32 or 64 bit operating system. This is/needs to be the same size because that makes sense to do. It's not like an int where it needs 4 bytes to store integer numbers, but a double needing twice that to store the whole and fractional part of a number. Having memory addresses of different sizes and lengths would not only be ridiculous, but also extremely difficult, if not impossible.\n\n");
}

void functionFour()
{
    printf("Entering functionFour() now...\n");
    int intVar;
    int *singlePtr = &intVar;
    int **doublePtr = &singlePtr;
    **doublePtr = 42;
    printf("intVar memory address: %d\n", *doublePtr);
    printf("Single pointer memory address: %d\n", doublePtr);
    printf("intVar: %d\n", intVar);
}