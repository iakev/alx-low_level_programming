#include "main.h"

/**
 * print_number - function to print an interger using _putchar() only
 *
 * @n: Character to be tested
 * Return: nothing.
 */
void print_number(int n)
{
	int separate = 10;
	int count = 1;
	int digit = 0;

	while ( n / separate != 0)
	{
		count++;
		separate *= 10;
	}

	while (count != 0)
	{
		digit = n / separate;
		_putchar(digit + '0');
		separate /= 10;
		count--;
	}
}
