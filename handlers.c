#include "main.h"

/**
 * handle_char - char
 * @args: pointer
*/

void handle_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
}

/**
 * handle_string - string
 * @args: pointer
*/

void handle_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		_putchar(*str);
		str++;
	}
}

/**
 * handle_int - integer
 * @args: pointer
*/

void handle_int(va_list args)
{
	int num = va_arg(args, int);

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
		return;
	}
	int divisor = 1;

	while (num / divisor > 0)
	{
		divisor *= 10;
	}
	while (divisor > 1)
	{
		divisor /= 10;
		char digit = '0' + num / divisor;

		_putchar(digit);
		num %= divisor;
	}
}
