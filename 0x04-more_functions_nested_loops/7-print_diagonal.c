#include "main.h"

/**
 * print_diagonal - print a \ character depending on n using _putchar()
 *
 * @n: interger that determines number of \ to be printed
 * Return: nothing just print to the standard output stream
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			int j;

			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
