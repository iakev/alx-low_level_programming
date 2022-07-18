#include "main.h"
#include <string.h>
/**
 * print_chessboard - functiofn that prints the chessboard
 *
 *
 * @a: board passed to be printed/ 2 dimensional array
 *
 * Return: nothing as it just prints
 *
 */
void print_chessboard(char (*a)[8])
{
	int row, col, i, j;

	col = 8;
	row = 8;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
			{
				_putchar('\n');
			}
		}
	}
}
