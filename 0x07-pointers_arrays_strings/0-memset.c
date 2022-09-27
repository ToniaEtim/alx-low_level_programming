#include "main.h"

/**
 * _memset - Function that fills memory with constant byte
 * @s: pointer to n
 * @b: constant byte
 * @n: bytes of memory area pointed to by s
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
