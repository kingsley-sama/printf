#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
int _printf(const char *format, ...)
{
	va_list args, args_copy;
	int count, i;
	char c;
	char *str;
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
					c = (char)va_arg(args, int);
					_putchar(c);
					i += 1;
					count += 1;
					break;
				case 's':
					va_copy(args_copy, args);
					str = va_arg(args_copy, char *);
					print_str(args);
					count += strlen(str);
					i += 1;
					break;
				case '%':
					_putchar('%');
					count += 1;
					i += 1;
					break;
				}
			}
			else if (format[i] != '%')
			{
				_putchar(format[i]);
				count += 1;
			}
			i++;
		}
	}
	return (count);
}
