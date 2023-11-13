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
	va_list args_copy;
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

					param[j].func(args);
					va_copy(args_copy, args);
					if (format[i + 1] != 's')
					{
						count += _strlen_recursion(args_copy);
						i += 1;
					}
					else
					{
						i+=1;
					}
				}
				j++;
			}
		}
		else if (format[i] == '\\' && format[i + 1] == '\\')
		{
			_putchar('\\');
			i += 1;
			count += 1;
		}
		else
		{
			_putchar(format[i]);
		}

		i++;
	}
	va_end(args);
	return (count);
}
