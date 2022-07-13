#include "main.h"

/**
 * _atoi - function that converts a string into an interger,
 *
 *
 * @s: string to be converted
 *
 * Return: an interger from th converted string
 */
int _atoi(char *s)
{
	int count = 0;
	char c;

	c = s[count];
	while (c != '\0');
	{
		if ('c' >= 48 && 'c' <= 57)
		{
			
		}
	}
}

int len_digit(char *s)
{
	int count = 0;
	int i = 0;
	char c;

	c = s[0];
	while (c != '\0')
	{
		if('c' >= 42 && 'c' <= 57)
		{
			count++;
		}
		else
			break;
	}
	return count;
}
