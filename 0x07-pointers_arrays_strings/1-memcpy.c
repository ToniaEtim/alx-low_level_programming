#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: parameter to copy into
 * @src: mermory area to copy from
 * @n: bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int m = 0;

	while (src[i++])
		m++;
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];

	for (i = m; i < n; i++)
		dest[i] = '\0';
	}

	return (dest);
}
