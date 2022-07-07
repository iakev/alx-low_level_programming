#include "main.h"

/**
 * print_line - print a dash line whose length depends on n using _putchar()
 *
 * @n: interger that determines number of dashes to be printed
 * Return: nothing just print to the standard output stream
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
