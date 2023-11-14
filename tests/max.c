#include "main.h"
#include <stdarg.h>
#include <stdio.h>
int _printf(const char *format, ...)
{
	va_list args;
	int count, i, j;
	delimeter param[] = {
		{'s', print_str},{'c', print_char},{'d', print_int},{'i', print_dec}
	};

	count = 0, i = 0, va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0' && format[i + 1] != '%')
		{
			j = 0;
			while (param[j].func != NULL)
			{
				if (format[i + 1] == param[j].a)
				{
					count += param[j].func(args);
					i += 1;
				}
				j++;
			}

		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			count++;
			i += 1;
		}	
		else if (format[i] == '\\' && format[i + 1] == '\\')
		{
			_putchar('\\');
			count += 1;
			i += 1;
		}
		else if (format[i] != '%' || format[i] != '\\')
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
