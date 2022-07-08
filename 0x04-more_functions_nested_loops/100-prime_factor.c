#include <stdio.h>

long int is_prime(long int n);
/**
 * main - find and print the largest prime factor of 612852475143
 *
 * Return: Always 0 since displaying.
 */
int main(void)
{
	long int dividend = 612852475143;
	long int divisor = 2;
	long int quotient = 0;
	long int prime = 0;

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
	printf("%ld\n", prime);

	return (0);
}

/**
 * is_prime - Tell if a number is prime
 *
 * @n: number to find if prime
 * Return: false if a number is not prime but return the prime number if a true
 * prime
 */
long int is_prime(long int n)
{
	const long int false = 0;
	long int bool = 0;
	long int i;

	for (i = 1; i <= n; i++)
	{
		if (n % i == 0 && i != n)
			bool = false;
		else
			bool = n;
	}
	return (bool);
}
