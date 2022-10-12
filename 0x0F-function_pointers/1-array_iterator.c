#include "function_pointers.h"
/**
 * array_iterator - function that executes function
 * @array: the array
 * @size: sizeof the array
 * @action: pointer to the function
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || size <= 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action) (array[i]);
}
