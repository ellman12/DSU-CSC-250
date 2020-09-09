#include <stdio.h>

int fact(int n) //Factorial.
{
    // First thing is to check the base case.
    if (n == 1)
    {
        printf("Result 1! = 1\n\n");
        return 1;
    }

    // Otherwise recursive: 5! = 5 * 4!
    printf("Solving %d * fact(%d)\n", n, n - 1);
    int result = n * fact(n - 1);
    printf("Result %d! = %d\n\n", n, result);
    return result;
}

int main()
{

    int x;
    printf("What number would you like to find the factorial of?? ");
    scanf("%d", &x);
    int result = fact(x);
    printf("Final result is %d", result);

    return 0;
}