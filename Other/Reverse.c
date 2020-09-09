#include <stdio.h>

int main()
{
    int number, one,two,three, reverse;    

    printf("Enter a three digit number:\n");
    
    scanf("%d", &number);

    one = number / 100;
    two = (number % 100) / 10;
    three = (number % 10);

    reverse = three*100+ two*10+ one;

    printf("The reversed number is: %d", reverse);
    printf("\n");
    printf("%c[4m %d  %c[0m",27,27);
    printf("\n"); 
    // attron(A_UNDERLINE); 
   printf("Hello World!\n"); 
    
    
    return 0;
}