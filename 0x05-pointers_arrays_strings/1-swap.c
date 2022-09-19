#include "main.h"

/**
 * swap_int - writes function that swaps
 *	the value of two integers
 * @a: first integer
 * @b: secod integer
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int bas = *a;
	*a = *b;
	*b = bas;
}
