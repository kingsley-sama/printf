#include "main.h"
#include <stdarg.h>
/**
 *_strlen_recursion - This returns the lenght of a string
 * Return: void
 *@args: args
 */
int _strlen_recursion(va_list args)
{
	char *s = va_arg(args, char *);
	int count, i;
	
	count = 0, i = 0;
	if (*s == '\0')
	{
		return (0);
	}
	while (s[i] != '\0')
	{
		count += 1;
		i++ ;
	}
	return (count);
}
