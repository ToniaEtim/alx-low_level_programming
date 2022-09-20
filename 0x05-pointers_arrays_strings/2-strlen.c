#include "main.h"

/**
 * _strlen - write a function that returns lengthof a string
 * @s: The string to get the length of
 * Return: length
 */
int _strlen( char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
