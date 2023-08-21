/**
* handle_octal - prints the octal number
* @list: va_list
* Return: the number
*/
int handle_octal(va_list list)
{
	int n = 0;
	handle_octal(va_arg(list, unsigned int)&n);

	return (n);
}
