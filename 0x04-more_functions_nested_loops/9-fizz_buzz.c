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
	char *div_5 = "Buzz";
	char *div_3 = "Fizz";
	char *div_35 = "FizzBuzz";

	for (j = 1; j < 101; j++)
	{
		if (j % 3 == 0  && j % 5 == 0)
			printf("%s ", div_35);
		else if (j % 5 == 0)
			printf("%s ", div_5);
		else if (j % 3 == 0)
			printf("%s ", div_3);
		else
			printf("%d ", j);
	}
	printf("\n");
	return (0);
}
