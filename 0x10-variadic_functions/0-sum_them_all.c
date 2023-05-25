#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of arguments that will be passed to the function
 * @...: variable numbers of parameters to calculate the sum
 * Return: 0 if n == 0
 * otherwise - the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list kat;
	unsigned int a;

	sum = 0;

	va_start(kat, n);
	for (a = 0; a < n; a++)
		sum += va_arg(kat, int);
	va_end(kat);
	return (sum);
}
