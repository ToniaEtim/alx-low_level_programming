#include "main.h"
/**
 * _strncat - concatenates two strings
 *	using at most an inputted number of bytes from src
 * @dest: The string to be appened upon
 * @src: The string to be appened to dest
 * @n: The number of bytes from src to be appended to dest
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, m = 0;

	while (dest[i++])
		m++;

	for (i = 0; src[i] && i < n; i++)
		dest[m++] = src[i];

	return (dest);
}
