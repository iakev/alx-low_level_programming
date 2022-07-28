#include "main.h"
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
	else if (s1 == NULL)
	{
		size1 = 0;
		size2 = strlen(s2);
	}
	else if (s2 == NULL)
	{
		size1 = strlen(s1);
		size2 = 0;
		n = 0;
	}
	else
	{
		size1 = strlen(s1);
		size2 = strlen(s2);
		if (n >= size2)
		{
			n = size2;
		}
	}
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
			printf("s1[%d] is:%c\n s[%d] is:%c\n", i, s1[i],i,s[i]);
		}
		else
		{
			s[i] = s2[j];
			printf("s2[%d] is:%c\n s[%d] is:%c\n", j,s2[j],i,s[i]);
			j++;
		}

	}
	s[i] = '\0';

	return (s);
}
