#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * print_char - writes the character c to stdout
 * @c: The character to write
 * Return: the output to stdout
 */
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);
	_putchar(c);
	return (1);
}

