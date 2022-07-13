#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 *
 * @str: string whose words to be capitalized.
 *
 * Return: a pointer to the modified string
 */
char *cap_string(char *str)
{
	char *c_add;

	c_add = s;
	while (*c_add != '\0')
	{
		if (*c_add >= 97 && *c_add <= 122)
		{
			*c_add -= 32;
		}
		c_add++;
	}

	return (s);
}
