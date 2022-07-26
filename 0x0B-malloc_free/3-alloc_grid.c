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
	int **grid, *col, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	col = malloc(sizeof(int) * width * height);
	if (col == NULL)
	{
		free(col);
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		free(col);
		free(grid);
		return (NULL);
	}
	for (i = 0; i < width * height; i++)
	{
		col[i] = 0;
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = col;
		col += width;
	}
	
	return (grid);
}
