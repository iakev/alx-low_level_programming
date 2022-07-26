#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free previously alocated grid
 *
 * @height: interger repping the height of the 2D array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
