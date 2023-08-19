#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  Adds all the numbers
 * @n: Amount of paramters passed to the function
 *
 * Return: Always 0 (Success)
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
