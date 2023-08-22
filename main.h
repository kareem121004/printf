#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
* struct format_o - struct checking letter
* @specifier: format specifier
* @handler: pointer to the handlers
*/
typedef struct format_o
{
	char *specifier;
	int (*handler)();
} FormatSpecifier;

int _printf(const char *format, ...);
int handle_char(va_list args);
int handle_string(va_list args);
int handle_int(va_list args);
void print_num(int digit, int *size);
int handle_percent(va_list args);
int _putchar(char c);
void print_bin(unsigned int bi, int *size);
int handle_binary(va_list bin);
int handle_rot13(va_list args);
int handle_rev_str(va_list args);
#endif
