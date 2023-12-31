#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Print numbers followed by a nwe line
 * @n: Number of integers passed to the function
 * @separator: The string to be printed between numbers
 *
 * Return: Always 0 (Success)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

	if (i < n - 1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
