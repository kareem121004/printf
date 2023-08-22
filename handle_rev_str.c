#include "main.h"

/**
 * handle_rev_str - reversed string
 * @args: args
 * Return: num
*/

int handle_rev_str(va_list args)
{
	int printed_chars = 0, i;
	char *str;

	str = va_arg(args, char *);

	while (str[i])
		i++;
	while (i--)
	{
		printed_chars += _putchar(str[i]);
	}

	return (printed_chars);
}
