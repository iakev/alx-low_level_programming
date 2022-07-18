#include <stddef.h>
#include "main.h"
#include <string.h>

/**
 * _strchr - function that returns a pointer to the first occurence of 'c' in
 * string 's' orf 'NULL' if character not found
 *
 * @s: pointer to string 's' that 'c' is searched for in
 * @c: character whose first occurence is sought
 *
 * Return: a pointer to the first occurence of 'c' or to 'NULL'
 */
char *_strchr(char *s, char c)
{
	int i, len;

	len = strlen(s);
	for (i = 0; i <= len ; i++)
	{
		if (s[i] == c)
		{
			break;
		}
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	else
		return (NULL);
}
