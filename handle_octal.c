#include "main.h"
void handle_octal(unsigned int n, int *size)
{
	if (n / 8)
	{
		handle_octal(n / 8, size);
	}
	size += 1;
	_putchar('0' + n % 8);
}
