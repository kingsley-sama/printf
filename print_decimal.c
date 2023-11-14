#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 * print_int - prints an integer digit by digit
 *Return: the number of characters printed
 * @args: integer param
 */
int print_dec(va_list args)
{
	int i = 1;
	int n = va_arg(args, int);
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	if (n < 10)
	{
		_putchar(n + '0');
		count++;
	}
	else
	{
		i = 1;
		while (n / i >= 10)
			i *= 10;
		while (i > 0)
		{
			_putchar((n / i) + '0');
			count++;
			if (i != 0)
				n %= i;
			i /= 10;
		}
	}
	return (count);
}
/**
 * print_const_int - prints an integer digit by digit
 * @args: const integer param
 *Return: count of characters printed
 */
int  print_const_dec(va_list args)
{
	int i;
	int n = va_arg(args, int);
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	if (n < 10)
	{
		_putchar(n + '0');
		count++;
	}
	else
	{
		i = 1;
		while (n / i >= 10)
			i *= 10;
		while (i > 0)
		{
			if (i != 0)
				_putchar((n / i) + '0');
			count++;
			if (i != 0)
				n %= i;
			i /= 10;
		}
	}
	return (count);
}
