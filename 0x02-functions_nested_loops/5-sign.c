#include "main.h"

/**
 * print_sign - function to check if a number is postive, negative or zero
 *   not
 * @n: number to be tested
 * Return: 1 if n is positive; 0 if zero, and -1 if negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
