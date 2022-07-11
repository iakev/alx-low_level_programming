#include "main.h"

/**
 * _puts - function that prints a string, followed by a newline, to the stdout
 *
 * @str: string to be printed follwed by a newline, to stdout
 *
 * Return: nothing
 */
void _puts(char *str)
{
	char cha;
	int count = 1;

	cha = *str;
	while (cha != '\0')
	{
		_putchar(cha);
		cha = *(str + count);
		count++;
	}
	_putchar('\n');
}
