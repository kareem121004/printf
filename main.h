#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>

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
int handle_int(va_list args);
void print_num(int digit, int *size);
int handle_percent(va_list args);
int _putchar(char c);
void print_bin(unsigned int bi, int *size);
int handle_binary(va_list bin);
void print_oct(unsigned int o, int *size);
int handle_octal(va_list oct);
void print_hex(unsigned int hexa, int *size);
int handle_hex(va_list hex);
int handle_HEX(va_list HEX);
void hexa_upp(unsigned int xx, int *size);
void p_unsigned_num(unsigned int un, unsigned int *size);
int handle_unsigned(va_list unsign);
#endif
