/**
 * inner_loop_if - conditional for formating display of times_table
 *
 * Return: Always 0.
 */
int _putchar(char c);

void inner_loop_if (int ent, int c, int f, int l)
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
