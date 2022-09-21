#include "main.h"

/**
 *  _strcat - a function that concatenates two strings
 *  @dest: is a string
 *  @src: a string to the dest string
 *  Return: two concat string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, n = 0;

	while (dest[i++])
		n++;

	for (i = 0; src[i]; i++)
		dest[n++] = src[i];

	return (dest);
}
