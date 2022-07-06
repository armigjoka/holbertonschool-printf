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
int_print_string(var_list arg);
int_print_int(var_list arg);
int_print_float(var_list arg);
#endif
