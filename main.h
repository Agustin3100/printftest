#ifndef MAIN
#define MAIN
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int _printf(const char *format, ...);
int (*op_func(const char *format))(va_list);

/**
 * struct func - struct for specifier to print
 * @t: charecter to compare
 * @f: function que devuelve
 */
typedef struct func
{
	char *op;
	int (*f)(va_list);
} op_t;

int _putchar(va_list);
int printstr(va_list);
int printper(va_list);

#endif
