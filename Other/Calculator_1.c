#include <stdio.h>

int main()
{
    float a, b, function;
    char ch;
Start:
    printf("\nPlease choose a funtion.");
    printf(" 1. Add\n 2. Subtract\n 3. Multiply\n 4. Divide\n");
    scanf("%f", &function);

    if (function > 4)
    {
        printf("You have entered an incorrect number.\n");
        goto Start;
    }

    printf("Enter 2 integer numbers\n");
    scanf("%f %f", &a, &b);

    if (function == 1)
    {
        printf("Addition of %.2f and %.2f is %.2f\n", a, b, (a + b));
    }
    else if (function == 2)
    {
        printf("Subtraction of %.2f and %.2f is %.2f\n", a, b, (a - b));
    }
    else if (function == 3)
    {
        printf("Multiplication of %.2f and %.2f is %.2f\n", a, b, (a * b));
    }
    else if (function == 4)
    {
        if (b != 0)
            printf("Division of %.2f and %.2f is %.2f\n", a, b, (a / b));
        else
            printf("Number cannot be divided by 0.\n");
    }

    printf("\n\nDo you wish to continue y/n?");
    scanf(" %c", &ch);

    if (ch == 'y' || ch == 'Y')
    {
        goto Start;
    }
    else
    {
        return 0;
    }
}