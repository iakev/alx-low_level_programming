#include <stdio.h>

/**
 * main - Entry point
 * print the alphabet using only putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	char string = 'a';
	char string1 = 'A';

	while (string <= 'z')
	{
		putchar(string);
		string++;
	}
	while (string1 <= 'Z')
	{
		putchar(string1);
		string1++;
	}
	putchar('\n');
	return (0);
}
