#include "main.h"

/**
* p_unsigned_num - prints unsigned in output
* @size: size pf printing
* @un: integer
* Return: void
*/
void p_unsigned_num(unsigned int un, unsigned int *size)
{
	if (un / 10)
	{
		p_unsigned_num(un / 10, size);
	}
	*size += 1;
	_putchar((un % 10) + '0');
}

/**
* handle_unsigned - prints unsigned numbers
* @unsign: number
* Return: uns
*/

int handle_unsigned(va_list unsign)
{
	unsigned int uns = 0;

	p_unsigned_num(va_arg(unsign, unsigned int), &uns);
	return (uns);
}
