#include <unistd.h>

/**
 * _putchar - Write the character c to stdout
 * @c: The character to print
 * Return: 1 if true, zero if false, on error return -1
 */

int _putchar(char c)
{
return(write(1, & c, 1));
}
