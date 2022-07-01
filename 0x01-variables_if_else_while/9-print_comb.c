#include <stdio.h>

/**
 * main - Entry point
 * print the alphabet using only putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int base_16 = 0;

	while (base_16 <= 9)
	{
		putchar(base_16 + '0');
		if (base_16 != 9)
		{
			putchar(',');
			putchar(' ');
		}
		base_16++;
	}
	putchar('\n');
	return (0);
}
