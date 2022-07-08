#include<stdio.h>
#include "main.h"

/**
 * main - print numbers, fizz if number multilple of 3, buzz if multiple of 5
 * and fizzbuzz of multiple of both 3 and 5
 *
 *
 * Return: nothing just print to the standard output stream
 */
int main(void)
{
	int j;

	for (j = 1; j < 101; j++)
	{
		if (j == 100)
		{
			if (j % 15 == 0)
				printf("FizzBuzz");
			else if (j % 5 == 0)
				printf("Buzz");
			else if (j % 3 == 0)
				printf("Fizz");
			else
				printf("%d", j);
		}
		else
		{
			if (j % 15 == 0)
				printf("FizzBuzz ");
			else if (j % 5 == 0)
				printf("Buzz ");
			else if (j % 3 == 0)
				printf("Fizz ");
			else
				printf("%d ", j);
		}
	}
	printf("\n");

	return (0);
}
