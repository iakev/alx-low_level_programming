#include <stddef.h>
#include "main.h"
#include <string.h>
#include <stdio.h>

char *start_match(char * s, char *str);
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
	ans = start_match(s, needle);
	printf("Now we found the start of a match %s\n", ans);
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
	if (bool)
		return (ans);
	else
	{
		start_match(ans,needle);
		ans = w
	}
}

char *start_match(char *str, char *needle)
{
	int i = bool = 0;
	char *ans = NULL;

	while (*str != '\0')
	{
		if (*str != needle[i])
		{
			printf("haystack is %s\n", str);
			str++;
			continue;
		}
		else
		{
			ans = str;
		}
	}
	if (ans == needle[i])
	{
		return (ans);
	}

	return (NULL);
}
