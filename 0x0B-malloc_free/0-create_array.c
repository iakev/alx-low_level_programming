#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it with a specific
 * char
 * @c: the intializing character
 * @size: the size of array to create using malloc
 *
 * Return: a pointer from malloc of tyoe character
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		str = malloc(sizeof(*str) * size);
		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
			while (i < size)
			{
				str[i] = c;
				i++;
			}
		}
	}
	return (str);
}
