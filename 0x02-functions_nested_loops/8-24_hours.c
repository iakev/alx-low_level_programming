#include "main.h"

/**
 * jack_bauer - function to print the 24hr clock hour and minutes for a day
 *
 * Return: Nothing just prints.
 */
void jack_bauer(void)
{
	int hr =  0;

	while (hr < 24)
	{
		int min = 0;
		int last = 0;
		int first = 0;

		while (min < 60)
		{
			if (hr < 10)
			{
				_putchar(0 + '0');
				_putchar(hr + '0');
			}
			else
			{
				last = hr % 10;
				first = hr / 10;
				_putchar(first + '0');
				_putchar(last + '0');
			}
			_putchar(':');
			if (min < 10)
			{
				_putchar(0 + '0');
				_putchar(min + '0');
			}
			else
			{
				last = min % 10;
				first = min / 10;
				_putchar(first + '0');
				_putchar(last + '0');
			}
			min++;
			_putchar('\n');
		}
		hr++;
	}
}
