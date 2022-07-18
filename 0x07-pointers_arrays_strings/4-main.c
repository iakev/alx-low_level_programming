#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "geeksforgeeks";
    char *f = "add";
    char *t;

    t = _strpbrk(s, f);
    if (t == NULL)
    {
	    printf("Null pointer alert\n");
    }
    else
    {
	    printf("%s\n", t);
    }
    return (0);
}
