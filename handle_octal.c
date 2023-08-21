#include "main.h"

/**
* print_oct - decimal to octal
* @o: octal number
* @size: size pointer
*/

void print_oct(unsigned int o, int *size)
{
	if (o / 8)
	{
		print_oct(o / 8, size);
	}
	*size += 1;
	_putchar('0' + o % 8);
}

/**
* handle_octal - number to octal
* @oct: octal number
* Return: octal
*/

int handle_octal(va_list oct)
{
	int octal = 0;

	print_oct(va_arg(oct, unsigned int), &octal);
	return (octal);
}
