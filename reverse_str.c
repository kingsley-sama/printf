#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <ctype.h>
/**
 *print_rev_str - This function reverses a string
 * Return: void
 *@args: this is the string
 */
int  print_rev_str(va_list args)
{
	char *s = va_arg(args, char *);
	int i = 0, len = 0, j;

	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		if (isalpha(s[j]))
		{
			_putchar(s[j]);
			len++;
		}
	}
	return (len);
}
