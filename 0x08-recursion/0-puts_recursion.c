#include "main.h"

/**
 * _puts_recursion - Function that prints a string
 * @s: parameter for char string
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\n')
		return;
	/*_putchar ('\n');*/
			_putchar(*s);
			_puts_recursion(s + 1);
}
