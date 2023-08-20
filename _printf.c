/**
* checking_format - check to found argument
* @c: char
* Return: size
*/
int checking_format(char c)
{
	if (c == '%')
	{
		_putchar('%');
		return (1);
	}
	return (0);
}

int check_arg(va_list arg, char *format, format_t *smle)
{
	int i = 0, j = 0, size = 0;

	while (format[i])
	{
		while (format[i] && format[i] != '%')
		{
			_putchar(format[i]);
			++i;
			size++;
		}
		j = 0;
		if (format[i] == '%')
		{
			i++;
			size += checking_format(format[i]);
			if (format[i] == '\0')
				return (-1);
		}
		while (smle[j].letter != '\0')
		{
			if (smle[j].letter == format[i])
			{
				size += smble[j].check(arg);
				break;
			}
			j++;
		}
		if (format[i])
		{
			if (symbole[j].letter == '\0' && format[i] != '%')
			{
				_putchar('%');
				_putchar(format[i]);
				size += 2;
			}
			i++;
		}
	}
	return (size);
}

/**
* _printf - print a format string
* @format: string with format
* Return: size of characters.
*/

int _printf(const char *format, ...)
{
	int po;
	va_list args;
	format_t smle[] = {
		{'s', print_string},
		{'c', print_char},
		{'d', print_integer},
		{'i', print_integer},
		{'b', print_binary},
		{'o', print_octol},
		{'x', print_hex_low},
		{'X', print_hex_upp},
		{'u', print_unsigned},
		{'r', print_rev},
		{'R', print_rot13},
		{'S', print_String},
		{'p', print_pointer},
		{'\0', NULL},
	};

	if (format == NULL)
		return (-1);
	va_start(args, format);
	po = check_arg(args, (char *)format, smle);
	va_end(args);
	return (po);
}
