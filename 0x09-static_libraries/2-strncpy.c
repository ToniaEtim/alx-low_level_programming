#include "main.h"
/**
 * _strncpy - function copies number
 * @dest: Stores the string copy
 * @src: The source string
 * @n: The maximum number of bytes to copy from source
 * Return: the pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, m = 0;

	while (src[i++])
		m++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = m; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
