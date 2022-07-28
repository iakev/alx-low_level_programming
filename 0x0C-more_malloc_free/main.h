#ifndef HEADER_FILE
#define HEADER_FILE
#define UNUSED __attribute__((unused))
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int _putchar(char c);

void *malloc_checked(unsigned int b);

char *string_nconcat(char *s1, char *s2, unsigned int n);
#endif
