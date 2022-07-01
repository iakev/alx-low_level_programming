#include <stdio.h>

/**
 * main - Entry point
 * print the alphabet using only putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char string = 'a';

	while (string <= 'z')
	{
		putchar(string);
		string++;
	}
	putchar('\n');
	return (0);
}
