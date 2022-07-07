#include "main.h"

/**
 * print_triangle - print a # triangle  depending on size using _putchar()
 *
 * @size: interger that determines number of \ to be printed
 * Return: nothing just print to the standard output stream
 */
void print_triangle(int size)
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
				if (j < (size - 1) - i )
				{
					if (i != size)
						_putchar(' ');
				}
				else
					_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
}
