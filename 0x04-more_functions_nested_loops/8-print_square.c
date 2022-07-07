#include "main.h"

/**
 * print_square - print a # square size using _putchar()
 *
 * @size: interger that determines square dimension to be printed
 * Return: nothing just print to the standard output stream
 */
void print_square(int size)
{
	int i = 0;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i < size)
		{
			int j;

			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
}
