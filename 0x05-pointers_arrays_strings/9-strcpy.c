#include "main.h"

/**
 * _strcpy - function that copies the string pointed by src,
 * inluding the terminating null byte (\0) to buffer pointed by dest
 *
 * @src: string to be copied
 * @dest:pointer to copied string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	char s = src[i];

	while (s != '\0')
	{
		dest[i] = src[i];
		i++;
		s = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
