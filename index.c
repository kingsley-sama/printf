#include "main.h"
#include <stdarg.h>

/**
 * _printf - function that prints output according to a format.
 * @format: an array of characters and specifier
 * Return:the number of characters printed
 */

int _printf(const char *format, ...)
{
	int count, i;
	char c, s;
	char *str;
	va_list args;

	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 'c':
				c = (char)va_arg(args, int);
				_putchar(c);
				i += 1;
				break;
			case 's':
				str = va_arg(args, char *);
				_print_str(str);
				i += 1;
				break;
			case '%':
				_putchar('%');
				i += 1;
				break;
			}
		}
		else if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}
