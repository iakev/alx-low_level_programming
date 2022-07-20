#include "main.h"

int prime_recursive(int, int);
/**
 * is_prime_number - returns bool if 'n' prime number or not
 *
 * @n: number tested if prime or not
 * Return: int representing bool value of prime number or not
 */
int is_prime_number(int n)
{
	if (n <= 0 || n == 1 || n % 2 == 0)
		return (0);
	return (prime_recursive(n - 1, n));
}
/**
 * prime_recursive - helper function for finding a prime number
 *
 * @n: int tested if prime or not
 * @guess: if prime or not
 * Return: int 0 or recursively call until we find the answer
 */

int prime_recursive(int guess, int n)
{
	if (n % guess == 0 && guess != 1)
	{
		return (0);
	}
	else if (n % guess == 0 && guess == 1)
	{
		return (1);
	}
	return (prime_recursive(guess - 1, n));
}
