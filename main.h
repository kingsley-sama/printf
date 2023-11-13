#ifndef PRINTF_FUNCTION_H
#define PRINTF_FUNCTION_H
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 *struct delimeter - this struct takes a string and typecasted function
 *@a: this is a character
 *@func: void poniter to a function that takes no params
 *
 */
typedef struct delimeter
{
	char a;
	void (*func)();
} delimeter;
int _printf(const char *format, ...);
int _putchar(char c);
void _print_str(char *s);
void print_int(int a);
int _strlen_recursion(va_list args);
char *rot13(char *s);
void _print_rev_recursion(char *s);
#endif
