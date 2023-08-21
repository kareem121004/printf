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

typedef struct FormatSpecifier_t
{
	char *specifier;
	int (*handler)();
} FormatSpecifier;

int handle_binary(va_list a);
void print_binary(unsigned int nu, int *size);
int handle_octal(va_list list);
void print_octal(unsigned int nu, int *size);
int _printf(const char *format, ...);
int handle_char(va_list args);
int handle_string(va_list args);
int handle_int(va_list args);
int handle_percent(va_list args);
int _putchar(char c);

#endif 
