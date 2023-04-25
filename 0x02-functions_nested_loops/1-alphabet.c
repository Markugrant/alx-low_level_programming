#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 * Description: 'Prints the alphabet in lowercase'
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	}
