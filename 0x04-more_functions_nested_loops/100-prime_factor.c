#include <stdio.h>

int is_prime(int n);
/**
 * main - find and print the largest prime factor of 612852475143
 *
 * Return: Always 0 since displaying.
 */
int main(void)
{
	long int dividend = 612852475143;
	int divisor = 2;
	int quotient = 0;
	int prime = 0;

	while (quotient != 1)
	{
		prime = is_prime(divisor);
		if (prime && dividend % prime == 0)
		{
			quotient = dividend / prime;
			dividend = quotient;
		}
		else
			divisor++;
	}
	printf("%d\n", prime);

	return (0);
}

/**
 * is_prime - Tell if a number is prime
 *
 * @n: number to find if prime
 * Return: false if a number is not prime but return the prime number if a true
 * prime
 */
int is_prime(int n)
{
	const int false = 0;
	int bool = 0;
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0 && i != n)
			bool = false;
		else
			bool = n;
	}
	return (bool);
}
