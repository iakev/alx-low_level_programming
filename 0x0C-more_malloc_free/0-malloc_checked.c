#include "main.h"
/**
 * malloc_checked - allocates specified memory using malloc
 *
 * @b: size of memory to be allcoted
 * Return: pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
