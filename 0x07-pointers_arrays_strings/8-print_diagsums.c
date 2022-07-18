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
	int row, col, i, j, diag1, diag2;

	col = size;
	row = size;
	diag1 = diag2 = 0;

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i == j)
			{
				diag1 += a[i][j];
			}
			if ((i + j) == (size - 1))
			{
				diag2 += a[i][j];
			}
		}
	}
	printf("%d, %d\n", diag1, diag2);

}
