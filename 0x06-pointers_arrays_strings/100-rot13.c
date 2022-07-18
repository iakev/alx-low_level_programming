#include "main.h"
#include <stdio.h>
/**
 * rot13 - function that encodes a string using rot13
 *
 *
 * @str: string to be encoded.
 *
 * Return: a pointer to the encoded string
 */
char *rot13(char *str)
{
	int arr[52] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78,
		       79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98,
		       99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109,
		       110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120,
		       121, 122, 0};
	char *s_add;
	int rot;
	int i = 0;

	rot = 13;
	s_add = str;
	while (*s_add != '\0')
	{
		while(i < 52 && *s_add != arr[i])
		{
			i++;
		}
		if ( i < 52 && ((*s_add + 13 > 90 && *s_add + 13 < 97)
				|| *s_add + 13 > 122))
		{
			rot = -13;
		}
		*s_add += rot;
		s_add++;
	}

	return (str);
}
