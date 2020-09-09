#include <stdio.h>
int main()

{
    float bill = 0;
    float tip = 0, total;
    char choice;

    printf("Enter the bill amount:");
    scanf("%f", &bill);

    printf("1.  10%%\n");
    printf("2.  15%%\n");
    printf("3.  20%%\n");
    printf("4.  25%%\n");
    printf("5.  30%%\n");
    printf("Please choose tip amount: ");
    scanf("%f", &tip);
    printf("%f\n", bill);

    if (tip == 1)
    {
        total = bill + (bill * 0.10);
        printf("Your choice is 1.\n");
        printf("Your total is %f\n", total);
    }
    if (tip == 2)
    {
        total = bill + (bill * 0.15);
        printf("Your choice is 2.");
        printf("Your Total is %f\n", total);
    }
    if (tip == 3)
    {
        total = bill + (bill * 0.20);
        printf("Your choice is 3.");
        printf("Your Total is %.2f\n", total);
    }
    if (tip == 4)
    {
        total = bill + (bill * 0.25);
        printf("Your choice is 4.");
        printf("Your Total is %f\n", total);
    }
    if (tip == 5)
    {
        total = bill + (bill * 0.30);
        printf("Your choice is 5.");
        printf("Your Total is %f\n", total);
    }
    return 0;
}