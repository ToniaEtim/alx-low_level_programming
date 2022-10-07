#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function allocates memory using malloc
 * @b: the size
 * if malloc fails terminate with 98
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);
	return (n);
}
