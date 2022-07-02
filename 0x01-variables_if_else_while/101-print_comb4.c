#include <stdio.h>

/**
 * main - Entry point
 * print the alphabet using only putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int base_16 = 0;
	int base_16_2 = 0;
	int base_16_3 = 0;

	while (base_16 <= 9)
	{
		while (base_16_2 <= 9)
		{
			while (base_16_3 <= 9)
			{
				if ((base_16_2 > base_16) &&
				    (base_16_3 > base_16_2))
				{
					putchar(base_16 + '0');
					putchar(base_16_2 + '0');
					putchar(base_16_3 + '0');
					if (base_16 < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				base_16_3++;
			}
			base_16_3 = 0;
			base_16_2++;
		}
		base_16_2 = 0;
		base_16++;
	}
	putchar('\n');
	return (0);
}
