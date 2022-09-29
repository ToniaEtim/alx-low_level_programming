#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number
 * @n: the paramerter to be calculated
 * Return: -1 if the num is lower than 0 or 1 if it is 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
