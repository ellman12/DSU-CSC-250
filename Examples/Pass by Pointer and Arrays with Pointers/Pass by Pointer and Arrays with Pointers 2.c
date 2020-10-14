///////////////////////////////////////////////////////////////////////
//Purpose: In-class example.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme for Computer Science II (CSC 250).
///////////////////////////////////////////////////////////////////////
//Created: Wednesday, October 14, 2020 11:23 AM.
///////////////////////////////////////////////////////////////////////
#include <stdio.h>

void changeX(int *memOfX)
{
    printf("memOfX = %p\n", memOfX);
    printf("What would you like to change x to? ");
    scanf("%d", memOfX);
}

void changeStuff(int *ip, float *fp, char *cp)
{
    *ip = 42;
    *fp = 3.14;
    *cp = 'a';
}

int main()
{
    int x;
    float f;
    char c;

    changeStuff(&x, &f, &c);
    printf("At the end of the program, x is %d.\n", x);
    printf("At the end of the program, f is %f.\n", f);
    printf("At the end of the program, c is %c.\n", c);
    return 0;
}