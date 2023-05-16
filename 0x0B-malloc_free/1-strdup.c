#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *kat;
	int a, b = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	kat = malloc(sizeof(char) * (a + 1));

	if (kat == NULL)
		return (NULL);
	for (b = 0; str[b]; b++)
		kat[b] = str[b];
	return (kat);
}
