#include "main.h"
#include <stdio.h>
/**
 * leet - function that encodes a string into 1337
 *
 *
 * @str: string to be encoded.
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
	char *s_add;
	int leetchars[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int leetnos[5] = {52, 51, 48, 55, 49};
	int i, j;

	s_add = str;
	while (*s_add != '\0')
	{
		j = 0;
		for (i = 0; i < 10; i += 2)
		{
			if (*s_add == leetchars[i] ||
			    *s_add == leetchars[i + 1])
			{
				*s_add = leetnos[j];
			}
			j++;
		}
		s_add++;
	}

	return (str);
}
