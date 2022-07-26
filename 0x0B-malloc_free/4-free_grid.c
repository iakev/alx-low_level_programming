#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free previously alocated grid
 *
 * @grid: pointer to start of 2D-array
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
