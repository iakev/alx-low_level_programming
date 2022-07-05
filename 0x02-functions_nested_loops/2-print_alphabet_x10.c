#include "main.h"
/**
 * print_alphabet_x10 - fuction to print alphabet and new line using
 * _putschar() 10 times.
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char *string = "abcdefghijklmnopqrstuvwxyz";

	while (i < 10)
	{
		int j = 0;

		while (j < 26)
		{
			_putchar(string[j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
