#include "main.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * _printchar - function that prints output according to a format.
 * @format: an array of characters and specifier
 * Return:the number of characters printed
 */
void _printchar(va_list args)
{
	char c;
	c = (char)va_arg(args, int);
	_putchar(c);
}
/**
 * _printstr - function that prints output according to a format.
 * @format: an array of characters and specifier
 * Return:the number of characters printed
 */
void _printstr(va_list args)
{
	char *s;
	s = va_arg(args, char *);
	if (s != NULL)
		_print_str(s);


	
}
/**
 * _printdigit - function that prints output according to a format.
 * @format: an array of characters and specifier
 * Return:the number of characters printed
 */
void _printdigit(va_list args)
{
	print_int(va_arg(args, int));
}

/**
 * _printf - function that prints output according to a format.
 * @format: an array of characters and specifier
 * Return:the number of characters printed
 */

int _printf(const char *format, ...)
{
	int count, i, j;
	char *str;
	va_list args;
	delimeter param[] = {{'s', _printstr},{'c', _printchar},{'d',_printdigit},{'i',_printdigit}};

	count = 0, i = 0, va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (param[j].func != NULL)
			{
				if (format[i + 1] == param[j].a)
				{


					if (format[i + 1] == 's')
					{
						str = va_arg(args, char *);
						_print_str(str);
						count += _strlen_recursion(str);
						i += 1;
					}
					else
					{
						param[j].func(args);
						count += 1;
						i += 1;
					}
				}
				j++;
			}
		}
		else if (format[i] == '\\' && format[i + 1] == '\\')
		{
			_putchar('\\');
			count += 1;
			i += 1;
		
		}
		else
		{
			count += 1;
			_putchar(format[i]);

		}

		i++;
	}
	va_end(args);
	return (count);
}
