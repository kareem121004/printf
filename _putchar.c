#include "main.h"
/**
* _putchar - writes a character c to stdout
* @c: the character to print
* Return: 1 on success
* on error, -1 returned, and error is set appriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
