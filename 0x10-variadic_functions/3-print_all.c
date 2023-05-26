#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all -  prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list kat;
	char *de;

	va_start(kat, format);

	while (*format != '\0')
	{
		switch (*format)
		{
			case 'c':
				printf("%c", va_arg(kat, int));
				break;
			case 'i':
				printf("%d", va_arg(kat, int));
				break;
			case 'f':
				printf("%f", va_arg(kat, double));
				break;
			case 's':
				{
				de = va_arg(kat, char *);
				if (de == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", de);
				}
				break;
		}
		default:
		break;
	}
	format;
	}
	printf("\n");
	va_end(kat);
}
