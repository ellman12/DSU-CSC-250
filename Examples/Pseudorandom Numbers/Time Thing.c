///////////////////////////////////////////////////////////////////////
//File: Time Thing.c
///////////////////////////////////////////////////////////////////////
//Purpose: time.h example.
///////////////////////////////////////////////////////////////////////
//Programmer: Elliott DuCharme
///////////////////////////////////////////////////////////////////////
//Initial release date: 9/11/2020 11:45 AM
///////////////////////////////////////////////////////////////////////
//Known issues/bugs: none
///////////////////////////////////////////////////////////////////////
//Revisions: v. 1.0
///////////////////////////////////////////////////////////////////////
//Comments:
///////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <time.h>

int main()
{
    int n;

    int currentTime = time(NULL);
    printf("Seconds since 1/1/1970 is: %d\n", currentTime); 

    return 0;
}