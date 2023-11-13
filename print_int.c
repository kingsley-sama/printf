#include <stdio.h>
#include "main.h"
/**
 * print_int - prints an integer digit by digit
 * @a: an integer to be printed
 */
void print_int(int a)
{
	int n = a;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		int i = 1;
		while (n / i >= 10)
		{
			i *= 10;
		}

		while (i > 0)
		{
			_putchar((n / i) + '0');
			n %= i;
			i /= 10;
		}
	}
}
