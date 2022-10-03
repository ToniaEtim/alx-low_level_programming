#include "main.h"

/**
 * _strchr - Function that locate a character string
 * @s: the string
 * @c: the character
 * Return: a pointer to the first occurrence of the character s
 *	NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (s);
}
