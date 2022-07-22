#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints the name of the program
 * @argc: count of arguments numbers
 * @argv: vector array of strings
 * Return: always zero sgnifyin
 */
int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
