#include "main.h"
#include <stdlib.h>
void free_grid_on_failure(int **grid, int height);
/**
 * alloc_grid - allocates memory for a 2D array of intergers
 *
 * @width: interger repping the width of the 2D array
 * @height: interger repping the height od the 2D array
 * Return: a pointer to the newly allcoated memmory for the 2D array
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j, bool = 0;

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
	}
	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
		{
			bool = 1;
		}
	}
	if (bool)
	{
		free_grid_on_failure(grid, height);
		return (NULL);
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
/**
 * free_grid_on_failure - frees grid memory if malloc fails
 *
 * @grid: pointer to start of 2-D array
 * @height: interger repping the height od the 2D array
 * Return: Nothing
 */
void free_grid_on_failure(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
