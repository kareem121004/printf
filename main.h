#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct FormatSpecifier - struct specifier
 * @specifier: format specifier
 * @handler: pointer to the handlers
*/

typedef struct
{
	char specifier;
	void (*handler)(va_list);
} FormatSpecifier;

int _printf(const char *format, ...);
void handle_char(va_list args);
void handle_int(va_list args);
void handle_string(va_list args);

int print_binary(va_list list);
char *itoa(long int, int);
int print(char *s);

int _putchar(char c);
int buffer(char c);
#endif
