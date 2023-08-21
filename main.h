#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <stdlib.h>

/**
* struct format - struct checking letter
* @specifier: format specifier
* @handler: pointer to the handlers
*/

typedef struct
{
	char specifier;
	int (*handler)(va_list);
} FormatSpecifier;

int print_octal(va_list list);
void handle_octal(unsigned int n, int *size);
int _printf(const char *format, ...);
int handle_char(va_list args);
int handle_string(va_list args);
int handle_int(va_list args);
int handle_percent(va_list args);
int _putchar(char c);

#endif 
