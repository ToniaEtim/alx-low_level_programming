#include "main.h"

/**
 * _pow_recursion - Function that returns the value of x
 * raised to the power of y
 * @y: the power to be raised to
 * @x: parameter whose value is raised to that of y
 * Return: -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
