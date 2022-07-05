#include "main.h"
/**
 * print_alphabet - fuction
 * function to print alphabet and new line using _putschar()
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i = 0;
	char *string = "abcdefghijklmnopqrstuvwxyz";

	while (i < 26)
	{
		_putchar(string[i]);
		i++;
	}
	_putchar('\n');
}
