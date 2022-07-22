#include "main.h"

/**
 * _isdigit - function to check if a character is a digit or not
 *   not
 * @c: Character to be tested
 * Return: 1 if c is lowercase; 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
/* means it's lowercase */
		return (1);
	else
		return (0);
}
