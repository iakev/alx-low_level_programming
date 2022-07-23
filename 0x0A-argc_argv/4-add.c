#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - function that prints the name of the program
 * @argc: count of arguments numbers
 * @argv: vector array of strings
 * Return: always zero sgnifyin
 */
int main(int argc, char *argv[])
{
	int i, j, len, sum = 0;


	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			j = 0;
			len = strlen(argv[i]);
			while (j < len)
			{
				if (isdigit(argv[i][j]))
				{
					j++;
					continue;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
