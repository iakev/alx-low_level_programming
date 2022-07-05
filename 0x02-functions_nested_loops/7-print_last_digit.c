#include "main.h"

/**
 * print_last_digit - function to print the last digit of a number
 *   not
 * @n: number that last digit is being printed
 * Return: last digit of number.
 */
int print_last_digit(int n)
{
	int last = 0;

	if (n > 0)
	{
		last  = n % 10;
		_putchar(last + '0');
	}
	else
	{
		last = (-1) * (n % 10);
		_putchar(last + '0');
	}
	return (last);
}
