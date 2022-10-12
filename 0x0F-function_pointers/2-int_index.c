#include "function_pointers.h"
/**
 * int_index - function that searches for an interger
 * @array: array of int
 * @size: number of element in the array
 * @cmp: pointer to the function to be used
 * Return: idex of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
		if ((*cmp) (array[i]) != 0)
			return (i);
	return (-1);
}
