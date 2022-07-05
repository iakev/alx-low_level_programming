#include "main.h"
/**
 * main - Entry point
 * function to print a string using _putschar() whos prototype is in main.h
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
