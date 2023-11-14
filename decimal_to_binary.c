#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints the binary equivalent of it’s input
 * @a: the positive or negative int input
 * Return: 1 if positive -1 if negative and 0 if 0
 */

int print_binary(unsigned int a)
{
	int count = 0, n = a;
	int binary[32], j, i = 0;

	if (n == 0)
		return (0);
	while (n > 0)
	{
		binary[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j] + '0');
		count++;
	}
	return (count);
}
