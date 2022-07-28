#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * argstostr -  concatenates all the arguments of your program.
 *
 * @ac:interger argument count
 * @av: cahracter array containing strings(character array) (arguments)
 * Return: pointer to the newly concateneted string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	long unsigned int j = 0;
	int i , size = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < ac; i++)
		{
			size += (strlen(av[i]) + 1);
		}
	}
	str = malloc(sizeof(*str) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i+= (strlen(av[i])))
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			str[i] = av[i][j];
			i++;
		}
		str[i] = '\n';
		printf("%c\n", str[i]);
	}

	return str;
}
