#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints the name of the program
 * @argc: count of arguments numbers
 * @argv: vector array of strings
 * Return: always zero sgnifyin
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc -1);
	return (0);
}
