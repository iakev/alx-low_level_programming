#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * followed by a newline,
 *
 * @str: string to be printed in reverse followed by a newline, to stdout
 *
 * Return: nothing
 */
void puts2(char *str)
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
	count = 0;
	while (count < len)
	{
		cha = *(str + count);
		if (cha != '\0')
			_putchar(cha);
		count += 2;
	}
	_putchar('\n');
}
