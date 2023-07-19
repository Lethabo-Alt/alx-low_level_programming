#include "main.h"

/**
 * print_sign - Print the sign of the number
 * @n: The number is to be checked
 * Return: 1 for positive num, -1 for negative num or zero for anything else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
