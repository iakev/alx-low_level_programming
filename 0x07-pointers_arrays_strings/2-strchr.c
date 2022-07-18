#include <stddef.h>
#include "main.h"

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
	char *str;

	str = s;
	while (*str != '\0')
	{
		if (*str == c)
			break;
		str++;
	}
	if (*str == '\0')
	{
		return (NULL);
	}
	return (str);
}
