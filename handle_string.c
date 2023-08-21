#include "main.h"

/**
 * handle_string - string
 * @args: pointer
 * Return: count
*/

int handle_string(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
