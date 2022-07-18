#include "main.h"

/**
 * _memset - function fills the first 'n' bytes of the memory area pointed
 *   to by's' with the constant byte 'b'
 *
 * @s: pointer to first charachter in string being replaced by byte 'b'
 * @b: the constant byte replacing string pointed to by 's'
 * @n: the number of bytes being replaced
 * Return: a pointer to the memory area 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (s);
}
