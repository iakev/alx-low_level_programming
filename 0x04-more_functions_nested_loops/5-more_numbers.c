#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 10 times using _putchar()
 * 3 times only
 *
 * Return: nothing just print to the standard output stream
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;
		int first = 0;
		int last = 0;

		while (j < 15)
		{
			if (j < 10)
				first = j;
			else
				first = j / 10;
			_putchar(first + '0');
			if (j >= 10)
			{
				last = j % 10;
				_putchar(last + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
