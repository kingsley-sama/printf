#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include "main.h"
/**
 * print_int - prints an integer digit by digit
 *Return: the number of characters printed
 * @args: integer param
 */
int print_int(va_list args)
{
    int i;
    int n = va_arg(args, int);
    int count = 0;

    if (n == 0)
    {
        _putchar('0');
        return 1;  // No need to proceed further if n is 0
    }

    if (n == INT_MIN)
    {
        // Handle INT_MIN separately
        // (Note: This is just an example; you may need a more specific implementation)
    }
    else
    {
        if (n < 0)
        {
            _putchar('-');
            count++;
            n = -n;
        }

        i = 1;
        while (n / i >= 10)
            i *= 10;
        while (i > 0)
        {
            _putchar((n / i) + '0');
            count++;
            if (i > 0)
            {
                n %= i;
            }
            i /= 10;
        }
    }

    return count;
}
