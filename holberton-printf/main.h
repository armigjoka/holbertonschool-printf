#ifndef _printf_
#define _printf_

/**
  * struct print - structure to print
  * @print: printed characters
  * @p: pointer
  */
typedef struct print
{
	char *print;
	int (*p)();
};
int_putchar(char c)

int_printf(const char *format, ...)


int_print_char(va_list arg);
int_print_string(va_list arg);
int_print_int(va_list arg);
int_print_float(va_list arg);
#endif
