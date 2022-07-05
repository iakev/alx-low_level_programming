#include "main.h"
/**
 * main - Entry point
 * function to print a string using _putschar() whos prototype is in main.h
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char *string = "_putchar";

	while (i < 8)
	{
		_putchar(string[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
