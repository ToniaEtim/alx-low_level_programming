#include <stdio.h>
#include "main.h"

/**
*print_diagonal - function prints diagonal line
*@n: is the number of times the character should be printed
*Return: returns nothing
*/

void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{

		for (len = 0; len < n; len++)
		{

			for (space = 0; space < len; space++)
			{
				putchar(' ');
			}

			putchar('\\');

			if (len == (n -1))
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
