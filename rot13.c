#include "main.h"
#include <stdarg.h>

/**
 * rot13 - rotate characters 13 places in the alphabet
 * @s: string
 * Return: string `s` rotated
 */

char  *rot13(char *s)
{
	int i;
	char storeh[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char storel[] = "nopqrstuvwxyzabcdefghijklm";
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
		{
			s[i] = (s[i] - 65 > 25) ?
				storel[s[i] - 97] : storeh[s[i] - 65];
		}
	}
	return (s);
}
/**
 * print_rot13_str - prints the strings in the function
 * @s:The string format specifier
 * Return: void
 */
int print_rot13_str(va_list args)
{
	char *s = rot13(va_arg(args, char *));
	int i = 0, count = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			_putchar(s[i]);
			count++;
			i++;
		}
	}
	return (count);
}
