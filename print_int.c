#include "main.h"

/**
 * handle_int - integer
 * @args: pointer
 * Return: printed_chars
*/

int handle_int(va_list args)
{
	char digit;
	int num = va_arg(args, int);
	int divisor, printed_chars;

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
	divisor = 1;
	printed_chars = 0;

	while (num / divisor > 0)
	{
		divisor *= 10;
	}

	while (divisor > 1)
	{
		divisor /= 10;

		digit = '0' + num / divisor;

		_putchar(digit);
		num %= divisor;
		printed_chars++;
	}
	return (printed_chars);
}
