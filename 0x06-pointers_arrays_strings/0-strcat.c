#include "main.h"

int _strlen(char *s);
/**
 * _strcat - function that appends string 'src' to string 'dest', overwriting
 * null byte(\0) at the end of dest and adding a terminating null byte
 *
 * @dest: the string that string 'src' is being appended to
 * @src: the string that is appended to string 'dest'
 * Return: a pointer to the string 'dest' that has been appended 'src'
 */
char *_strcat(char *dest, char *src)
{
	int i, dest_len;

	dest_len = _strlen(dest);
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
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
