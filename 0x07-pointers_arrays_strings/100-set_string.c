#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 *
 * @s: a pointer to a pointer
 * @to: the value being set to pointer s
 * Return: nothing as it prints
 */
void set_string(char **s, char *to)
{
	*s = to;
}
