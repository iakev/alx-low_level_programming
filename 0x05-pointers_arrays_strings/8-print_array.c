#include "main.h"
#include<stdio.h>

/**
 * print_array - function that prints n elements of an array
 * followed by a newline,
 *
 * @a: array from which numbers are printed
 * @n: number of elements of Array a to be printed
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", *(a + i));
		else
			printf("%d", *(a + i));
	}
	printf("\n");
}
