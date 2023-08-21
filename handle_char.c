#include "main.h"

/**
 * handle_char - char
 * @args: pointer
 * Return: 1 or 0;
*/

int handle_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}
