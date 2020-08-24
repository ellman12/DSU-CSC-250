#include <stdio.h>
#include <math.h>

// This program finds the first N (up to 10) primes and prints their sum
// Recall that 1 is not prime, and primes start at 2

int isPrime(int x);

int main()
{
	int n = 10;
	int primes[10];
	primes[0] = 2;

	// First, let's get the first n primes
	// We'll cycle through numbers and check if it's prime
	// If so, then we'll save it to our array. Once we have N
	// of them, then we'll move on.
	int i = 1;
	int number = 3;
	while (i < n)
	{
		if (isPrime(number))
		{
			primes[i] = number;
			i++;
			number += 2;
		}
	}

	// Now, let's compute their sum
	int total;
	for (i = 0; i < n; i++)
	{
		total += primes[i];
	}

	printf("The sum of the first %d primes is %d\n", n, total);

	return 0;
}

// This function checks if a number is prime by looking for abort
// divisor. If it is prime, it returns 1. If it's not prime, it returns 0.
int isPrime(int x)
{
	if (x % 2 == 0)
	{ // Tells if the number is even
		return 0;
	}

	int i;
	for (i = 3; i <= sqrt(x); i += 2)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}

	return 1;
}