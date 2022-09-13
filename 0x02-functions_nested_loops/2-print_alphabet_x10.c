#include "main.h"
/**
* print_alphabet-x10 - function to print abc x10
*
* Return: 0
*/
void print_alphabet_x10(void)
{
	char c, i;

	for (c = 'a'; c <= 'z'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
