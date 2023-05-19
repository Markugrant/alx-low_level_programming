#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two positive numbers
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	unsigned long mu1;
	int k, l;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (k = 1; k < argc; k++)
	{
		for (l = 0; argv[k][l] != '\0'; l++)
		{
			if (argv[k][l] > 57 || argv[k][l] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	mu1 = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", mu1);
	return (0);
}
