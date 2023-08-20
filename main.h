#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
* struct format - struct checking letter
* @let: letter
* @check: checking functoin.
*/
typedef struct format
{
	char let;
	int (*check)(va_list arg);
} format_t;

int print_string(va_list s);
int print_char(va_list c);
int print_int(va_list s);
int print_binary(va_list b);
int print_octol(va_list b);
int print_hex_upp(va_list b);
int print_hex_low(va_list b);
int print_unsigned(va_list u);
int print_rev(va_list strings);
int print_rot13(va_list s);
int print_String(va_list s);
int print_pointer(va_list ptr);

int _putchar(char c);

#endif 
