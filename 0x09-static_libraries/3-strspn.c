#include "main.h"
#include <string.h>

/**
 * _strspn - function that returns number of bytes in initial segment of 's'
 * consisting of bytes from string 'accept'
 *
 * @s: string which is counted
 * @accept: bytes which must be present for the count to happen
 *
 * Return: a positive interger indicating the number of bytes found
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, len, count, tracker;

	len = strlen(s);
	count = 0;
	for (i = 0; i < len; i++)
	{
		tracker = count;
		for (j = 0; j < strlen(accept); j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (tracker == count)
		{
			break;
		}
	}

	return (count);
}
