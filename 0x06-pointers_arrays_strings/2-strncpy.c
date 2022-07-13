#include "main.h"

int _strlen(char *s);
/**
 * _strncpy - function that copies a string 'src' to string 'dest' upto n bytes
 * overwriting contents of 'dest' if n not size of 'dest' then
 * null byte(\0) is appended until the end of 'dest''s size
 *
 * @dest: the string that string 'src' is being copied to
 * @src: the string that is copied to string 'dest'
 * @n: bytes specifying the limit of bytes of chars to be copied
 * Return: a pointer to the string 'dest' that has been appended 'src'
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, src_len;

	src_len = _strlen(src);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (src_len < n)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	/* dest[dest_len + i] = '\0';*/
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
