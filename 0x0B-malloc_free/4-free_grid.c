#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees a 2 dimensional arrey
 * @grid: 2 dimensional grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothig
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
