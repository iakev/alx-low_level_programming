#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters of a string to
 * uppercase
 *
 * @str: string to be changed lowercase letters to uppercase letters.
 *
 * Return - a pointer to the modified string
 */
char* string_toupper(char *s)
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

	return s;
}
