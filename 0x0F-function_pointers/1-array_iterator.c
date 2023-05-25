#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - print each array element on a new line
 * @array: array
 * @size: the size of the array
 * @action: pointer to print in regular or hexadecimal
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
