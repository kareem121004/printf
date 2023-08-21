#include "main.h"
/**
* print_binary - from decimal to binary
* @nu: number
* Return: size
*/
void print_binary(unsigned int nu, int *size)
{
	if (nu / 2)
	{
		print_binary(nu / 2, size);
	}
	*size += 1;
	_putchar('0' + nu % 2);
}
