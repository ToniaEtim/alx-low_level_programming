#include "main.h"

/**
 * _puts - writes function that prints a string to stdout
 * @s: The string to be printed
 */

void _puts(char *s)
{
	while (*s)
		_putchar(*s++);

	_putchar('\n');
}
