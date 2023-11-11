#include "main.h"

/**
 * _print_str - prints the strings in the function
 * @s:The string format specifier
 * Return: void
 */

void _print_str(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
