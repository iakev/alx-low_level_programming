#include "main.h"

/**
 * print_rev - function that prints a string in reverse, followed by a newline,
 * to the stdout
 *
 * @s: string to be printed in reverse followed by a newline, to stdout
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int len = 0;
	char cha;
	int count = 1;

	cha = *s;
	while (cha != '\0')
	{
		cha = *(s + count);
		count++;
		len++;
	}
	while (len >= 0)
	{
		cha = *(s + len);
		_putchar(cha);
		len--;
	}
	_putchar('\n');
}
