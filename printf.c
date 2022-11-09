#include <stdarg.h>
#include <stdio.h>
#include"main.h"
#include<stdlib.h>
/**
  *_printf - function print segun format.
  * @f is a character string is composed of zero o more directives.
  * Return: count of character printed.
  */
int (*op_func(const char *))(va_list ap);

int  _printf(const char *format, ...)
{
	int i;
va_list ap;

int count = 0;
int (*ptr) (va_list);

if (format == NULL)
{
	return(-1);
}

va_start(ap, format);


for (i = 0; format[i]; i++)
{
if (format[i] != '%')
{
write(1, &format[i], 1);
count += 1;
}
else 
{
ptr = op_func(&format[i + 1]);
if (!ptr)
{
	write(1, &format[i], 2);
}
(*ptr)(ap);
}
}
va_end(ap);
return (count);
}

