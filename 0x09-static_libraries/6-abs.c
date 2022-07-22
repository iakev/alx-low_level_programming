#include "main.h"

/**
 * _abs - function to return an absolute number of an interger
 *   not
 * @n: number to be tested
 * Return: n if n is positive; 0 if zero, and -1*n if negative.
 */
int _abs(int n)
{
	int abs = 0;

	if (n > 0)
	{
		abs = n;
	}
	else if (n == 0)
	{
		abs = 0;
	}
	else
	{
		abs = -1 * n;
	}
	return (abs);
}
