#include "main.h"

/**
 * factorial - returns factorial of a given number
 *
 * @n: interger to be factorialized
 * Return: int representing factorial of 'n'
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
