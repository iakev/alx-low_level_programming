#include "main.h"

/**
 * puts_half - function that prints second half of a string
 * followed by a newline,
 *
 * @str: string to be printed second half
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int len = 0;
	char cha;
	int count = 1;

	cha = *str;
	while (cha != '\0')
	{
		cha = *(str + count);
		count++;
		len++;
	}
	if (len % 2 == 0)
	{
		count = len / 2;
	}
	else
		count = (len - 1) / 2;
	while (count < len)
	{
		cha = *(str + count);
		if (cha != '\0')
			_putchar(cha);
		count++;
	}
	_putchar('\n');
}
