#ifndef _printf_
#define _printf_

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct print - structure to print
 * @print: printed characters
 * @p: pointer
 */
typedef struct print
{
	char *print;
	int (*p)();
} print_type;

int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list arg);
int _print_string(va_list arg);
int _print_int(va_list arg);
int _print_float(va_list arg);
int to_print(const char *format, print_type argument[], va_list project);
char *convert(unsigned int number, int base);
int _print_reverse(va_list project);
int _print_rot13(va_list project);
int _print_unsigned(va_list project);
int _print_octal(va_list project);
char _print_binary(va_list project);
int _print_hex_u(va_list project);
int _print_rot13(va_list project);
int _print_string(va_list project);
int _print_percent(va_list project __attribute__((unused)));
int _print_int(va_list project);
int _printf(const char *format, ...);
#endif
