#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals of a
 * sqaure matrix
 *
 *
 * @a: array to square matrix passed (2D array)
 * @size:size of the square matrix
 * Return: nothing as it just prints
 *
 */
void print_diagsums(int *a, int size)
{
	int i, diag1, diag2, count, count1;

	count = count1 = 0;
	diag1 = diag2 = 0;
	for (i = 0; i < (size * size); i++)
	{
		if (i % size == 0)
		{
			diag1 += a[count + i];
			count += 1;
		}
	}
	for (i = 0; i <= (size * size); i++)
	{
		if (i % size == 0 && i != 0)
		{
			diag2 += a[(i - 1) - count1];
			count1 += 1;
		}
	}
	printf("%d, %d\n", diag1, diag2);
}
