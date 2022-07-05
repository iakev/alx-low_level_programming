#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function to print upto 98 from n in either side
 *@n: starting interger to eithe count down or up to 98
 * Return: Always 0.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		else if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
