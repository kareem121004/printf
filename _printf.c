#include "main.h"



/**
 * _printf - print all
 * @format: format string
 * Return: num
*/

int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	FormatSpecifier format_specifier[] = {
		{'c', handle_char},
		{'s', handle_string},
		{'d', handle_int},
		{'i', handle_int},
		{'%', handle_percent},
		{'\0', NULL}
	};

	int printed_chars = 0;
	int i;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			for (i = 0; format_specifier[i].specifier != '\0'; i++)
			{
				if (*format == format_specifier[i].specifier)
				{
					format_specifier[i].handler(args);
					printed_chars++;
					break;
				}
			}
		}
		else
		{
			_putchar(*format);
			printed_chars++;
		}
		format++;
	}
	va_end(args);
	return (printed_chars);
}
