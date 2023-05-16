#include "main.h"
#include <stdlib.h>
/**
 * creat_array - creat array of size and assign char c
 * @size : size of array
 * @c : char to assign
 * Description : creates an array of chars, and initializes it with char c
 * Return : pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c);
{
	char *str;
	unsigned int ka;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);
	for (ka = 0; ka < size; ka++)
		str[ka] = c;
	return (str);
}
