#include <stddef.h>
#include "main.h"
#include <string.h>

/**
 * _strstr - function that locates first occurence of substring 'needle' in
 * string 'haystack'
 *
 * @haystack: pointer to string 's' that is scanned for substring
 * @needle: string containing substring that is searched for in 'haystack'
 *
 * Return: a pointer to the beginning of located substring or
 * NULL if substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *s, *str, *ans;
	int i = 0;
	int bool = 0;

	s = haystack;
	str = needle;
	while (*s != '\0')
	{
		if (*s != needle[i])
		{
			s++;
			continue;
		}
		else
		{
			ans = s;
			while (*str != '\0')
			{
				if (*s == *str)
				{
					bool = 1;
				}
				else
					bool = 0;
				str++;
				s++;
			}
		}
		s = ans;
		s++;
	}

	if (bool)
		return (ans);
	else
		return (NULL);
}
