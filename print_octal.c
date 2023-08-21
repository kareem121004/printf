/**
* print_octal - octal number
* @nu:number
* @size: sizefor print
*/
#include "main.h"
void print_octal(unsigned int nu, int *size)
{
	if (n / 8)
	{
		print_octal(n / 8, size);
	}
	size += 1;
	_putchar('0' + n % 8);
}
