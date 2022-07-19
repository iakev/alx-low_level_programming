#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string followed by a new line
 *
 * @s: string input to be dispalyed followed by a newline
 * Return: Nothing as it only just prints
 */
void _puts_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
	{
		_putchar('\n');
		/* end recursion */
		return;
	}
	else
	{
		_putchar(*s);
		/* printf("%s\n", s++); */
		_puts_recursion(++s);
	}
}
