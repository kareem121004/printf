#include "main.h"

/**
 * handle_int - integer
 * @args: pointer
 * Return: printed_chars
*/

int handle_int(va_list args)
{
	int num = va_args(args, int);

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
