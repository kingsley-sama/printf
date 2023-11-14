#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
int _printf(const char *format, ...)
{
	va_list args;
	int count, i;
	/* delimeter param[] = { */
	/* 	{'s', print_str},{'c', print_char},{'d', print_int},{'i', print_dec} */
	/* }; */

	count = 0, i = 0, va_start(args, format);
	while (format[i] != '\0')
	{
		count = 0, i = 0, va_start(args, format);
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				switch (format[i + 1])
				{
				case 'c':
					count += print_char(args);
					i++;
					break;
				case 's':
					count += print_str(args);
					i ++;
					break;
				case '%':
					_putchar('%');
					count++;
					i++;;
					break;
				}
			}
			else if (format[i] != '%')
			{
				_putchar(format[i]);
				count += 1;
			}
			else if (format[i] == '\\' && format[i + 1] == '\\')
			{
				_putchar(format[i]);
				count += 1;
			}
			i++;
		}
	}
	return (count);
}
