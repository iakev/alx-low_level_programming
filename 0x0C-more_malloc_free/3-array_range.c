#include "main.h"
/**
 * array_range - create an array of intergers
 *
 * @min: minimum interger contained in array and start of said array
 * @max: maximum interger and end of created array
 * Return: pointer to allocated memory or NULL if it fails.
 */
int *array_range(int min, int max)
{
	int size, i, entry, *ptr;

	if (min > max)
	{
		return (NULL);
	}
	entry = min;
	size = (max - min) + 1;
	ptr = malloc(sizeof(*ptr) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = entry;
		entry += 1;
	}

	return (ptr);
}
