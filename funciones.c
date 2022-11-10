#include <unistd.h>
#include<stdarg.h>
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * print_char - prints a charecter to stdout
 * @ap: variadic parameter
 *
 * Return: number of charecters printed
 */

int printchar(va_list ap)
{
	char c = va_arg(ap, int); /** se podria hacer una conversion forzada a (char)*/

	return (write(1, &c, 1));/** si el proximo argumento es nulo sale del programa*/
}



/**
  *
  *
  *
int printper(va_list ap)
{

	write(1, "%", 1);

	return (1);
}**/

int printstr(va_list ap)
{
	int i;
	int count = 0;
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
	{
		return (-1);
	}

	while (str[i])
	{
		write(1, &str[i], 1);
		count += 1;
		i++;
	}

	return (count);
}
