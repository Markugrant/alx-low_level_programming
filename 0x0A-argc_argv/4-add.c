#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * main - program that adds positive numbers
 * @argc:this is the argument count
 * @argv: this is the argument vector
 * Return: return to 0
 */
int main(int argc, char *argv[])
{
	int sum = 0, a;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			int b;
			char *str;

			str = argv[a];
			for (b = 0; str[b] != '\0'; b++)
			{
				if (str[b] < 48 || str[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (a = 1; a < argc; a++)
	{
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
