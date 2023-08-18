#include "main.h"
/**
* print - print char
* @s: string
* Return: string length
*/
int print(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		_putchar(s[i]);

	return (i);
}
/**
* print_binary - print a number in binary
* @list: number to print binary number
* Return: length of the number in binary
*/
int print_binary(va_list list)
{
	char *str;
	int size;

	str = itoa(va_arg(list, unsigned int), 2);
	size = print(str);

	return (size);
}
