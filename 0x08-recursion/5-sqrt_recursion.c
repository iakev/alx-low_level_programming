#include "main.h"
int good_enough(int, int);
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
	return (sqrt_recursive(n / 2, n));
}
/**
 * sqrt_recursive - helper function for square root
 *
 * @n: square root to be found of n
 * @guess: guess of square root
 * Return: int representing value of square root of 'n'
 */

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
		return (sqrt_recursive(guess - 1, n));
	}
}
/**
 * good_enough - checks if guess of square root is fine
 *
 * @n: square root to be found of n
 * @guess: interger to be checked
 * Return: int representing  a  bool value if true or not
 */

int good_enough(int guess, int n)
{
	return (n - (guess * guess) == 0);
}
