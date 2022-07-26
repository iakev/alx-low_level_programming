#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates memory for a 2D array of intergers
 *
 * @width: interger repping the width of the 2D array
 * @height: interger repping the height od the 2D array
 * Return: a pointer to the newly allcoated memmory for the 2D array
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			free(grid[i]);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
