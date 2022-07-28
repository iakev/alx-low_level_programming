#include "main.h"
/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmeb: number of elemnts in the created array
 * @size: byte size of each member in the array
 * Return: pointer to allocated memory or NULL if it fails.
 */
void *_calloc(unsigned int nmeb, unsigned int size)
{
	unsigned int i;
	void *ptr;
	char *str;

	if (size == 0 || nmeb == 0)
	{
		return (NULL);
	}
	str = malloc(nmeb * size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmeb; i++)
	{
		str[i] = 0;
	}
	ptr = (void*) str;
	return (ptr);
}
