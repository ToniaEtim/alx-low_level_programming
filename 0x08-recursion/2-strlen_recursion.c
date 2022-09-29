#include "main.h"

/**
 * _strlen_recursion - Function that returns the lenth of string
 * @s: the parameter pointing to the string
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
		else
		{
			return (1 + _strlen_recursion(s + 1));
		}
}
