#include "main.h"

/**
 * _isalpha - function to check if a character is a lower case  or upper case
 *   not
 * @c: Character to be tested
 * Return: 1 if c is lowercase; 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
/* means it's lowercase */
		return (1);
	else
		return (0);
}
