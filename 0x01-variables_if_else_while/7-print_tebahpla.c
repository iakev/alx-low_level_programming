#include <stdio.h>

/**
 * main - Entry point
 * print the alphabet in reverse using only putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char string = 'z';

	while (string >= 'a')
	{
		putchar(string);
		string--;
	}
	putchar('\n');
	return (0);
}
