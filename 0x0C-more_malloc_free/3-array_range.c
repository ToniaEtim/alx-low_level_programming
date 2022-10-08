#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - makes an arrary with numbers
 * @min: start num
 * @max: max num
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, l = 0;
	int sum;

	if (min > max)
		return (NULL);
	sum = max - min;
	arr = malloc(sizeof(int) * (sum + 1));
	if (arr == NULL)
		return (NULL);
	l = min;
	for (i = 0; i <= sum; i++)
		arr[i] = l++;
	return (arr);
}
