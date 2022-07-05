#include "main.h"
/**
 * times_table - function to print the times_table upto 9
 *
 * Return: Nothing just prints.
 */
void times_table(void)
{
	int row =  0;
	int numbers [10]  = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int first = 0;
	int last = 0;

	while (row < 10)
	{
		int col = 0;
		int entry = 0;

		while (col < 10)
		{
			entry = row * numbers[col];
			if (col < 9)
			{
				if (entry < 10)
				{
					_putchar(entry + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					first = entry / 10;
					last = entry % 10;
					_putchar(first + '0');
					_putchar(last + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if (entry < 10)
				{
					_putchar(entry + '0');
				}
				else
				{
					first = entry / 10;
					last = entry % 10;
					_putchar(first + '0');
					_putchar(last + '0');
				}

			}
			col++;
		}
		_putchar('\n');
		row++;
	}
}
