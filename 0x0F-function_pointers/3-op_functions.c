#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - returns sum of a and b
 * @a: number 1
 * @b: number 2
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference
 * @a: number 1
 * @b: number 2
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product
 * @a: number 1
 * @b: number 2
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_mod - return the remainder of the division
 * @a: number 1
 * #b: number 2
 * Returns: the remainder
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
/**
 * op_div - return the result of the division
 * @a: number 1
 * @b: number 2
 * Return: result
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
