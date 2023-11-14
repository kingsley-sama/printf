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
	int (*func)();
} delimeter;
int _printf(const char *format, ...);
int _putchar(char c);
int print_const_int(va_list args);
int print_int(va_list args);
int print_const_str(va_list args);
int print_str(va_list args);
int print_char(va_list args);
int print_dec(va_list args);
int  print_const_dec(va_list args);

#endif
