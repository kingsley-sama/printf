#include "main.h"
/**
 *_strlen_recursion - This returns the lenght of a string
 * Return: void
 *@s: string input
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
