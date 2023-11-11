#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to write
 * Return: the output to stdout
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

