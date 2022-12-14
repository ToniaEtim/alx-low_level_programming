#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2dimen array of int
 * @width: array's width
 * @height: arrary's height
 * Return: NULL on failure and if widthor height is neg. return 0 and
 * pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0, j;

	if (width == 0 || height == 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for (; i < height; i++)
		{

			array[i] = (int *) malloc(sizeof(int) * width);
			if (array[i] != NULL)
			{
				for (j = 0; j < width; j++)
					array[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(array[i]);
					i++;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
