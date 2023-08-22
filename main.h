#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/**
* struct format - struct checking letter
* @specifier: format specifier
* @handler: pointer to the handlers
*/

typedef struct
{
	char *specifier;
	int (*handler)();
} FormatSpecifier;

int _printf(const char *format, ...);
int handle_char(va_list args);
int handle_string(va_list args);
void print_num(int digit, int *size);
int handle_int(va_list args);
int handle_percent(va_list args);
int handle_binary(va_list bin);
int handle_rev_str(va_list args);
int _putchar(char c);
#endif

