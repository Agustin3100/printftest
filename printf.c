#include <stdarg.h>
#include <stdio.h>
#include"main.h"
#include<stdlib.h>
/**
  *_printf - function print segun format.
  * @f is a character string is composed of zero o more directives.
  * Return: count of character printed.
  */

int  _printf(const char *format, ...)
{

va_list ap;
int count = 0, i = 0;
int (*ptr) (va_list);

va_start(ap, format);


	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			ptr = op_func(&format[i]);
			if(ptr != NULL)
			{
				count += ptr(ap);
			}
		}
		else
		{
			_putchar(format[i]);
			count+=1;
		}
		
	}
	
	




	if (format == NULL)
	{
		return (-1);
	}

va_end(ap);
return (count);
}

