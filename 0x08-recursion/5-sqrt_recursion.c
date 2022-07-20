#include "main.h"
int good_enough(int, int);
int new_guess(int, int);
int sqrt_recursive(int, int);
/**
 * _sqrt_recursion - returns the square root of 'n'
 *
 * @n: square root to be found of n
 * Return: int representing value of square root of 'n'
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (sqrt_recursive(n/2, n));
}
int sqrt_recursive(int guess, int n)
{
	if (good_enough(guess, n))
	{
		return (guess);
	}
	else if (guess <= 0)
	{
		return (-1);
	}
	else
	{
		return sqrt_recursive(guess - 1, n);
	}
}

int good_enough(int guess, int n)
{
	return (n - (guess * guess) == 0);
}
