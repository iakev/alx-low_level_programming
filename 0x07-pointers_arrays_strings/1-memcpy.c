#include "main.h"

/**
 * _memcpy - function copies 'n' bytes from memory area 'src' to memory area
 * 'dest'
 *
 * @dest: pointer to first charachter in string being copied from 'src'
 * @src: pointer to string being copied from 'n' bytes
 * @n: the number of bytes bbeing copied from 'src' to 'dest'
 * Return: a pointer to the memory area 'dest'
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char * s;

	s = dest;
	for (i = 0; i < n; i++)
	{
		*s = src[i];
		s++;
	}

	return (dest);
}
