#include "main.h"

/**
 * handle - checking specifier.
 * @format: string.
 * @args: arguments.
 * @format_specifier: struct.
 *
 * Return: num
*/

int handle(const char *format, va_list args, FormatSpecifier *format_specifier)
{
	int printed_chars = 0, i = 0, j;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;

			while (format_specifier[j].specifier != NULL)
			{
				if (format[i] == '%')
				{
					printed_chars += _putchar('%');
					break;
				}

				else if (*(format_specifier[j].specifier) == format[i])
				{
					printed_chars += format_specifier[j].handler(args);
					if (printed_chars == -1)
						return (-1);
					break;
				}
				j++;
			}

			if (format_specifier[j].specifier == NULL)
			{
				printed_chars += _putchar('%');
				printed_chars += _putchar(format[i]);
			}
		}
		else
			printed_chars += _putchar(format[i]);
		i++;
	}
	return (printed_chars);
}

/**
 * _printf - print all functions
 * @format: format string.
 *
 * Return: num or -1
*/

int _printf(const char *format, ...)
{
	int printed_chars = 0;
	va_list args;

	FormatSpecifier format_specifier[] = {
		{"c", handle_char},
		{"s", handle_string},
		{"i", handle_int},
		{"d", handle_int},
		{"r", handle_rev_str},
		{'\0', NULL}
	};

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);

	printed_chars = handle(format, args, format_specifier);

	va_end(args);
	return (printed_chars);
}
