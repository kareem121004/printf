/**
* handle_binary - prints binary number
* @a: va_list
* Return: the binary number
*/
int handle_binary(va_list a)
{
	int n = 0;

	print_binary(va_arg(a, int), &a);
	return (a);
}
