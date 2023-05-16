#include "main.h"
#include <stdlib.h>
/**
 * count_word - help function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int k = 0, a = 0, b;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			k = 0;
		else if (k == 0)
		{
			k = 1;
			a++;
		}
	}
	return (a);
}
/**
 * **strtow - splits a sting into words
 * @str: string to split
 * Return: pointer to an attay of string (success) or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int e, f = 0, g = 0, h = 0, i, j, k;

	while (*(str + g))
		g++;
	i = count_word(str);
	if (i == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (i + 1));
	if (matrix == NULL)
		return (NULL);
	for (e = 0; e <= g; e++)
	{
		if (str[e] == ' ' || str[e] == '\0')
		{
			if (h)
			{
				k = e;
				tmp = (char *) malloc(sizeof(char) * (h + 1));
				if (tmp == NULL)
					return (NULL);
				while (j < k)
					*tmp++ = str[j++];
				*tmp = '\0';
				matrix[f] = tmp - h;
				f++;
				h = 0;
			}
		}
		else if (h++ == 0)
			j = e;
	}
	matrix[f] = NULL;
	return (matrix);
}
