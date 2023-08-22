#include "main.h"

/**
* print_hex - from decimal to hexadecimal in lowercase
* @hexa: number
* @size: size
* Return: void
*/

void print_hex(unsigned int hexa, int *size)
{
	if (hexa / 16)
	{
		print_hex(hexa / 16, size);
	}
	*size += 1;
	if (hexa % 16 < 10)
		_putchar('0' + hexa % 16);
	else
		_putchar('a' + ((hexa % 16) - 10));
}

/**
* handle_hex - prints number in lowercase hexadecimal
* @hex: number
* Return: the hexadecimal number
*/

int handle_hex(va_list hex)
{
	int he = 0;

	print_hex(va_arg(hex, unsigned int), &he);
	return (he);
}

/**
* print_HEX - from number to hexadecimal in lowercase
* @HEXA: number
* @size: size
* Return: void
*/

void print_HEX(unsigned int HEXA, int *size)
{
	if (HEXA / 16)
	{
		print_HEX(HEXA / 16, size);
	}
	*size += 1;
	if (HEXA % 16 < 10)
		_putchar('0' + HEXA % 16);
	else
		_putchar('A' + ((HEXA % 16) - 10));
}

/**
* handle_HEX - print numbers in hexadecimal
* @HEX: number
* Return: the hexadecimal number
*/

int handle_HEX(va_list HEX)
{
	int hE = 0;

	print_hex(va_arg(HEX, unsigned int), &hE);
	return (hE);
}

/**
* hexa_upp - from decimal to hexadecimal upper
* @xx: number
* @size: size of printing
*/

void hexa_upp(unsigned int xx, int *size)
{
	int xa = 1;

	if (xx / 16)
	{
		print_HEX(xx / 16, size);
	}
	if (xa == 1)
	{
		_putchar('0');
		*size += 1;
	}
	*size += 1;
	if (xx % 16 < 10)
		_putchar('0' + xx % 16);
	else
		_putchar('A' + ((xx % 16) - 10));
	xa = 0;
}
