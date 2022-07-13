#include "main.h"

int _strlen(char *s);
/**
 * _strcmp - function that compares two strings
 *
 * @s1: the string that string 'src' is being compared to
 * @s2: the string that is compared to string 'dest'
 *
 * Return: an interger that is respectively less than, equal to or greater than
 * if 'dest' is found to be less than, match or greater than 'src'
 */
int _strcmp(char *s1, char *s2)
{
	int i, s1_len, s2_len, len;
	int comp = 0;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	len = s1_len;
	if (s2_len > s1_len)
		len = s2_len;
	for (i = 0; i < len; i++)
	{
		if(s1[i] - s2[i] == 0)
			continue;
		else
		{
			comp = s1[i] - s2[i];
			break;
		}
	}

	return comp;
}

/**
 * _strlen - function that finds length of a string
 *
 * @s: the string whose length is found
 * Return: an interger representing length of string 'str'
 */
int _strlen(char *s)
{
	int len = 0;
	int count = 0;
	char c;

	c = s[count];
	while (c != '\0')
	{
		count++;
		c = s[count];
		len++;
	}
	return (len);
}
