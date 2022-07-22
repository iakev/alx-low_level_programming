#include <stddef.h>
#include "main.h"
#include <string.h>
#include <stdio.h>

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
	_putchar(haystack[0]);
	return (needle + 1);
}
