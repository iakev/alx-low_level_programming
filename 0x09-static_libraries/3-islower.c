#include "main.h"

/**
 * _islower - function to check if a character is lower case or note
 * @c: Character to be tested
 * Return: 1 if c is lowercase; 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)/* means it's lowercase */
		return (1);
	else
		return (0);
}
