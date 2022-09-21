#include "main.h"
/**
 * reverse_array - Function that reverses the content of an array of integers
 * @a: The array of intergers to be reversed
 * @n: The number of element in the array
 */
void reverse_array(int *a, int n)
{
	int m, man;

	for (man = n - 1; man >= n / 2; man--)
	{
		m = a[n - 1 - man];
		a[n - 1 - man] = a[man];
		a[man] = m;
	}
}
