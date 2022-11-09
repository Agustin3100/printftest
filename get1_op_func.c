#include "main.h"
#include <stdio.h>
#include<string.h>
/**
  * get_op_func - puntero a una funcion.
  * @s: string a comparar.
  * Return: NULL en caso de fallo.
  */
int (*op_func(const char *format))(va_list)

{
	int i;

	op_t ops[4] = {
		{"c", _putchar},
		{"s", printstr},
		{"%", printper},
		{NULL, NULL}
	};
	

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (*(ops[i].op) == *format)
		{
			return (ops[i].f);
		}
		
	}
	return (0);
}
