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
		if (string == 'q'  || string == 'e')
		{
			string++;
		}
		else
		{
			putchar(string);
			string++;
		}
	}
	putchar('\n');
	return (0);
}
