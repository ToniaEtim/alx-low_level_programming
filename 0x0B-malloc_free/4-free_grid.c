#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid -function that frees 2d array
 * @grid: 2d grid
 * @height: height
 * Return: void
 */


void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
