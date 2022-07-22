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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
