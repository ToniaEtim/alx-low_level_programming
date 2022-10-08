#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates any array of intergers
 * @min: start num
 * @max: max num
 * Return: the pointer to the allocated array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);
	for (len = 0; len < (max - min); len++)

	arr = malloc(sizeof(int) * (len + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
