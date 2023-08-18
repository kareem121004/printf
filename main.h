#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

int print_binary(va_list list);
char *itoa(long int, int);
int print(char *s);

int _putchar(char c);
int buffer(char c);
#endif
