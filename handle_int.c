#include "main.h"

/**
* print_num - print num in output
* @digit: number
* @size: pointer size
* Return: void
*/

void print_num(int digit, int *size)
{
	unsigned int number;

	if (digit < 0)
	{
		digit *= -1;
		*size += 1;
		_putchar('-');
	}
	number = digit;
	if (number / 10)
	{
		print_num(number / 10, size);
	}
	*size += 1;
	_putchar((number % 10) + '0');
}

/**
* handle_int - integer to print
* @args: pointer
* Return: digit
*/

int handle_int(va_list args)
{
	int digit = 0;
	int num;

	num = va_arg(args, int);
	print_num(num, &digit);
	return (digit);
}
