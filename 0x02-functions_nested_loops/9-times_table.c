#include "main.h"

void inner_loop_if(int ent, int c, int f, int l);
void inner_loop_else(int ent, int c, int f, int l);

/**
 * times_table - displays multiplication table from 0 to 9
 *
 * Return: Nothing only prints.
 */
void times_table(void)
{
	int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int row = 0;
	int first = 0;
	int last = 0;

	while (row < 10)
	{
		int col = 0;
		int entry = 0;
		int next_entry = 0;

		while (col < 10)
		{
			entry = row * numbers[col];
			next_entry = row * numbers[col + 1];
			if (next_entry < 10)
				inner_loop_if(entry, col, first, last);
			else
				inner_loop_else(entry, col, first, last);
			col++;
		}
		_putchar('\n');
		row++;
	}
}
/**
 * inner_loop_if - helper function to displays multiplication table from 0 to 9
 * @ent: interger denoting the value of multiplication
 * @c: interger representing columns of the table
 * @f: first interger for dealing with double digits for _putchar()
 * @l: last interger for dealing with doublw digits for _putchar()
 * Return: Nothing only prints.
 */
void inner_loop_if(int ent, int c, int f, int l)
{
	{
		if (ent < 10)
		{
			_putchar(ent + '0');
			if (c != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		else
		{
			f = ent / 10;
			l = ent % 10;
			_putchar(f + '0');
			_putchar(l + '0');
			if (c != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
/**
 * inner_loop_else - helper function to displays multiplication table
 * from 0 to 9
 * @ent: interger denoting the value of multiplication
 * @c: interger representing columns of the table
 * @f: first interger for dealing with double digits for _putchar()
 * @l: last interger for dealing with doublw digits for _putchar()
 * Return: Nothing only prints.
 */
void inner_loop_else(int ent, int c, int f, int l)
{
	{
		if (ent < 10)
		{
			_putchar(ent + '0');
			if (c != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		else
		{
			f = ent / 10;
			l = ent % 10;
			_putchar(f + '0');
			_putchar(l + '0');
			if (c != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
