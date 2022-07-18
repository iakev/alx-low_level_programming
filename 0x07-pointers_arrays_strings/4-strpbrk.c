#include <stddef.h>
#include "main.h"
#include <string.h>

/**
 * _strpbrk - function that locates first occurence in string 's' of any of the
 * bytes in the string 'accept'
 *
 * @s: pointer to string 's' that is scanned
 * @accept: string containing bytes that are searched for
 *
 * Return: a pointer to the byte in 's' that matches first occurence of bytes
 * in 'accept' or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned long int i, j;
	char *str = s;

	for (i = 0; i <= strlen(s) ; i++)
	{
		for (j = 0; j <= strlen(accept); j++)
		{
			if (s[i] == accept[j])
			{
				str = &s[i];
				break;
			}
		}
		if (*str == accept[j])
			break;
	}
	if (s[i] == accept[j])
	{
		return (str);
	}
	else
		return (NULL);
}
