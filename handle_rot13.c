#include "main.h"

/**
 * handle_rot13 - encode the letter .
 * @args: The input string to be modified.
 * Return: The number of characters processed.
*/

int handle_rot13(va_list args)
{
	int count = 0;
	char root_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char root_rep[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	char *str = va_arg(args, char *);

	while (str)
	{
		char *p = str;

		while (*p)
		{
			char *root_p = root_chars;
			char *root_r = root_rep;

			int matched = 0;

			while (*root_p)
			{
				if (*p == *root_p)
				{
					*p = *root_r;
					matched = 1;
					break;
				}
				root_p++;
				root_r++;
			}
			if (matched)
			{
				_putchar(*p);
				count++;
			}
			else
			{
				_putchar(*p);
			}
			p++;
		}

		str = va_arg(args, char *);
	}
	return (count);
}
