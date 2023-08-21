#include "main.h"
/**
* print_octal - octal number
* @nu:number
* @size: sizefor print
*/
#include "main.h"
void print_octal(unsigned int nu, int *size)
{
	if (nu / 8)
	{
		print_octal(nu / 8, size);
	}
	size += 1;
	_putchar('0' + nu % 8);
}
