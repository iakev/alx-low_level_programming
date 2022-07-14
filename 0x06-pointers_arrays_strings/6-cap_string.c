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

	c_add = str;
	if (*c_add >= 97 && *c_add <= 122)
		*c_add -= 32;
	while (*c_add != '\0')
	{
		if ((*c_add == 32 || *c_add == 9 || *c_add == 11 || *c_add == 10
		     || *c_add == 44 || *c_add == 59 || *c_add == 46 || *c_add
		     == 33 || *c_add == 63 || *c_add == 34 || *c_add == 40 ||
		     *c_add == 41 || *c_add == 123 || *c_add == 125)
		    && (*(c_add + 1) >= 97 && *(c_add + 1) <= 122))
		{
			*(c_add + 1) -= 32;
		}
		c_add++;
	}

	return (str);
}
