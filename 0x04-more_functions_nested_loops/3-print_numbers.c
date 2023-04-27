#include "main.h"

/**
 * print_number - Print numbers between 0-9
 * Return: no return
 */
void print_numbers(void)

{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
