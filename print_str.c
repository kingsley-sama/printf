#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_str - prints the strings in the function
 * @s:The string format specifier
 * Return: void
 */

int print_str(va_list args)
{
	char *s = va_arg(args, char *);
	int i = 0, count = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		count++;
		i++;
	}
	return (count);
}
/**
 * print_const_str - prints the strings in the function
 * @s:pointer to the string
 * Return: void
 */

int print_const_str(va_list args)
{
	int i = 0, count = 0;
	const char *s = va_arg(args, char *);

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		count++;
		i++;
	}
	return (count);
}
