#include "main.h"

/**
 * _isupper - function to check if a character is a lower case  or upper case
 *   not
 * @c: Character to be tested
 * Return: 1 if c is lowercase; 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
/* means it's lowercase */
		return (1);
	else
		return (0);
}
