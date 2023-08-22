#include "main.h"
#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: a character to print
* Return: on sucsses 1
* on error, -1 is returned, and errno is set appropriatly.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
