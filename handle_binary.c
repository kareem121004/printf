#include "main.h"

/**
* print_bin - decimal to binary
* @bi: binary number
* @size: pointer size
* Return: void
*/

void print_bin(unsigned int bi, int *size)
{
	if (bi / 2)
	{
		print_bin(bi / 2, size);
	}
	*size += 1;
	_putchar('0' + bi % 2);
}

/**
* handle_binary - number to binary
* @bin: list binary
* Return: num
*/
int handle_binary(va_list bin)
{
	int num = 0;

	print_bin(va_arg(bin, int), &num);
	return (num);

}

