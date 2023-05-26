#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all -  prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *de, *sep = "";

	va_list kat;

	va_start(kat, format);

	if (format)
	{
		while (format[a])
		{
		switch (format[a])
		{
			case 'c':
				printf("%s%c", sep, va_arg(kat, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(kat, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(kat, double));
				break;
			case 's':
				
				de = va_arg(kat, char *);
				if (!de)
					de = "(nil)";
				
				printf("%s%s", sep, de);
				break;
					default:
				a++;
				continue;
				}
				sep = ",";
				a++;
		}
	}
		printf("\n");
		va_end(kat);
}
