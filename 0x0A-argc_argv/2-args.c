#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints all arguments a program receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: return to 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
