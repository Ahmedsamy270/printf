#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>
#include <limits.h>

/**
 * struct format - is a struct for _printf function
 * @spec: is a pointer for the specifier
 * @func: is a function to be called
 */

typedef struct format
{
	char *spec;
	int (*func)();
} mystruct;

int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(const char *);
int printf_c(va_list mylist);
int printf_string(va_list mylist);
int printf_per(void);
int printf_rev(va_list mylist);
int printf_dec(va_list mylist);
int printf_int(va_list mylist);

#endif
