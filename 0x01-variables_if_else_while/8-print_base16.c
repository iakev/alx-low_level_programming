#include <stdio.h>

/**
 * main - Entry point
 * print the alphabet using only putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char string1 = 'a';
	int base_16 = 0;

	while (base_16 <= 9)
	{
		putchar(base_16 + '0');
		base_16++;
	}
	while (string1 <= 'f')
	{
		putchar(string1);
		string1++;
	}
	putchar('\n');
	return (0);
}
