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
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}

/**
 * handle_int - integer
 * @args: pointer
 * Return: printed_chars
*/

int handle_int(va_list args)
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
		return (1);
	}
	int divisor = 1;
	int printed_chars = 0;

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
		printed_chars++;
	}
	return (printed_chars);
}
