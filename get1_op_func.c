#include"main.h"
#include<stdio.h>
#include<stdarg.h>
/***
  *
  */
int (*op_func(const char *op))(va_list)
{
		int i; 
		
		op_t ops[]= {

			{'s', printstr},
			{'c', printchar},
			{'%', printper},
			
			};

		for (i = 0; ops[i].p != '\0'; i++)
		{
			if (ops[i].p == *op)				
				return (ops[i].f);
		}
		return(NULL);
}

