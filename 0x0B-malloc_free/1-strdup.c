#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - allocates new memory that contains a copy of string parameter
 *
 * @str: string to be copied into newly allocated memory
 *
 * Return: a pointer to the newly allcoated memory containing a copy of 'str'
 */
char *_strdup(char *str)
{
	int i, size;
	char *str1;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		size = strlen(str);
		str1 = malloc((sizeof(*str) * size) + 1);
		if (str1 == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				str1[i] = str[i];
			}
		}
	}
	return (str1);
}
