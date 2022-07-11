#include "main.h"
#include <stdio.h>

int _strlen(char *s);
/**
 * rev_string - function that reverses a string,
 *
 *
 * @s: string to be reversed
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int len = 0;
	char cha;
	int i;
	char *begin, *end;

	begin = s;
	end = s;
	len = _strlen(s);
	for (i = 0; i < len - 1; i++)
		end++;
	for (i = 0; i < len / 2; i++)
	{
		cha = *end;
		*end = *begin;
		*begin = cha;

		begin++;
		end--;
	}
}

/**
 * _strlen - function that returns the length of a string
 *
 * @s: string whose length is returned
 *
 * Return: int length of string s
 */
int _strlen(char *s)
{
	int len = 0;
	char cha;
	int count = 1;

	cha = *s;
	while (cha != '\0')
	{
		len++;
		cha = *(s + count);
		count++;
	}

	return (len);
}

