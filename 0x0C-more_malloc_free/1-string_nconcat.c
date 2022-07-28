#include "main.h"
void preprocess(char *, char *, unsigned int *,
		unsigned int *, unsigned int *);
/**
 * string_nconcat - concatenates tow strings s1 and s2
 *
 * @s1: string added to a certain bit ro s2
 * @s2: string to be added to s1 upto n
 * @n: interger repersenting the extent that s2 is added to s1
 * Return: pointer to allocated memory  or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, size1, size2, j = 0;

	if (s1 == NULL && s2 == NULL)
	{
		s = strdup("");
		return (s);
	}
	preprocess(s1, s2, &n, &size1, &size2);
	s = malloc(sizeof(*s) * (size1 + n + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (size1 + n); i++)
	{
		if (i < size1)
		{
			s[i] = s1[i];
		}
		else
		{
			s[i] = s2[j];
			j++;
		}

	}
	s[size1 + n + 1] = '\0';
	return (s);
}
/**
 * preprocess - concatenates tow strings s1 and s2
 *
 * @s1: string added to a certain bit ro s2
 * @s2: string to be added to s1 upto n
 * @n: interger repersenting the extent that s2 is added to s1
 * @size1: length of s1
 * @size2: length of s2
 * Return: nothing
 */

void preprocess(char *s1, char *s2, unsigned int *n,
		unsigned int *size1, unsigned int *size2)
{
	if (s1 == NULL)
	{
		*size1 = 0;
		*size2 = strlen(s2);
		if (*n > *size2)
		{
			*n = *size2;
		}
	}
	else if (s2 == NULL)
	{
		*size1 = strlen(s1);
		*size2 = 0;
		*n = 0;
	}
	else
	{
		*size1 = strlen(s1);
		*size2 = strlen(s2);
		if (*n >= *size2)
		{
			*n = *size2;
		}
	}
}
