#include "main.h"

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
