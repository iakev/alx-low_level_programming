#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
char *allocate_mem(char *s1, char *s2, int *, int *);
/**
 * str_concat - concatenates two strings
 *
 * @s1: string to be concatenated with 's2'
 * @s2: string to be concated with 's1' starting with 's1'
 * Return: a pointer to the newly allcoated memory containing contents of 's1'
 * followed by 's2'
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, size1, size2, j = 0;

	str = allocate_mem(s1, s2, &size1, &size2);
	if (str == NULL)
	{
		return (NULL);
	}
	else if (strlen(str) == 0)
	{
		str = "";
		return (str);
	}
	else
	{
		if (s1 == NULL)
		{
			for (i = 0; i < size2; i++)
			{
				str[i] = s2[i];
			}
		}
		else if (s2 == NULL)
		{
			for (i = 0; i < size1; i++)
				str[i] = s1[i];
		}
		else
		{
			for (i = 0; i < size1; i++)
				str[i] = s1[i];
			for (i = size1; i < (size2 + size1); i++)
			{
				str[i] = s2[j];
				j++;
			}
		}
	}
	return (str);
}
/**
 * allocate_mem - perform the malloc operation accordingly
 *
 * @s1: string to be concatenated with 's2'
 * @s2: string to be concated with 's1' starting with 's1'
 * @size1: address of interger storing size of 's1'
 * @size2: address of interger storing size of 's2'
 * Return: a pointer to the newly allcoated memory using malloc
 */

char *allocate_mem(char *s1, char *s2, int *size1, int *size2)
{
	char *str;
	*size1 = *size2 = 0;

	if (s1 != NULL && s2 != NULL)
	{
		*size1 = strlen(s1);
		*size2 = strlen(s2) + 1;
		str = malloc(sizeof(*s1) * (*size1 + *size2));
	}
	else if (s1 == NULL && s2 == NULL)
	{
		str = '\0';
	}
	else if (s1 == NULL)
	{
		*size2 = strlen(s2) + 1;
		str = malloc(sizeof(*s2) * (*size2));
	}
	else if (s2 == NULL)
	{
		*size1 = strlen(s1) + 1;
		str = malloc(sizeof(*s1) * (*size1));
	}

	return (str);
}
