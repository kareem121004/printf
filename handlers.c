#include "main.h"

/**
 * handle_char - char
 * @args: pointer
 * Return: 1 or 0;
*/

int handle_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * handle_percent - char
 * @args: pointer
 * Return: 1 or 0;
*/

int handle_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}

/**
 * handle_string - string
 * @args: pointer
 * Return: count
*/

int handle_string(va_list args)
{
	int count;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	count = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}
