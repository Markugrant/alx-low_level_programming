#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * @max: maximum range of values stored
 * @min: minimum range of values stored
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr, a = 0, b = min;

	if (min > max)
		return (0);
	arr = malloc((max = min + 1) * sizeof(int));
	if (!arr)
		return (0);
	while (a <= max - min)
		arr[a++] = b++;
	return (arr);
}
