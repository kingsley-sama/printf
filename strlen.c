#include "main.h"
#include <stdarg.h>
#include <string.h>
/**
 *strlen_char - This returns the lenght of a string
 * Return: lenght of string
 *@s: string character
 */
int strlen_char(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 *strlen_const_char - This returns the lenght of a string
 * Return: lenght of string
 *@s: string constant
 */
int strlen_const_char(const char *s)
{
	int i = 0;

	if (*s == '\0')
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

