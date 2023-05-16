#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: hieght input
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **kat;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);
	kat = malloc(sizeof(int *) * height);
	if (kat == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		kat[a] = malloc(sizeof(int) * width);
		if (kat[a] == NULL)
		{
			for (; a >= 0; a--)
				free(kat[a]);
			free(kat);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			kat[a][b] = 0;
	}
	return (kat);
}
