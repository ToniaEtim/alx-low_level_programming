#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number od args
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	va_start(list, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(list, unsigned);
	va_end(list);
	return (sum);
}
