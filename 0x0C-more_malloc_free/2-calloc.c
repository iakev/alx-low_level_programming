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
	void *ptr;

	if (size == 0 || nmeb == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmeb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	explicit_bzero(ptr, nmeb);
	return (ptr);
}
