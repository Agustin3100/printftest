#ifndef MAIN
#define MAIN
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


int _printf(const char *format, ...);
int (*op_func(const char *op))(va_list);

/**
 * struct func - struct for specifier to print
 * @op: charecter to compare
 * @f: function que devuelve
 */
typedef struct func
{
    char p;
	int (*f)(va_list);
} op_t;
 int printchar(va_list ap);
int _putchar(char c);
int printstr(va_list);
int printper(va_list);

#endif
