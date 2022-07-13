#include "main.h"

/**
 * reverse_array - function that reverses contents of an array
 *
 * @a: array to be reversed.
 * @n: interger number of items in array
 * Return - nothing just reverses array in place
 */
void reverse_array(int *a, int n)
{
	int *first_add;
	int *last_add;
	int i;
	int temp = 0;

	first_add = a;
	last_add = a;
	for (i = 1; i < n; i++)
		last_add++;
	for (i = 0; i < (n / 2); i++)
	{
		temp = *first_add;
		*first_add = *last_add;
		*last_add = temp;
		first_add++;
		last_add--;
	}
}
