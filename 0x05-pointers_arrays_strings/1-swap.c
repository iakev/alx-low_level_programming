#include "main.h"

/**
 * swap_int - function that takes a pointers to two intergers
 * and swaps their values
 * @a: pointer to first interger
 * @b: pointer to second interger
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
