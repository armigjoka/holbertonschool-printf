#include "main.h"
/**
 * _printf: function that will replicate what printf function does
 * @format: it is a string that is represented by a character
 * Return: will always return the number of how many characters are printed
*/
int _printf(const char *format, ...)
{
	print_type argument[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"%", _print_percent},
		{"d", _print_init},
		{"i", _print_init},
		{"r", _print_reverse},
		{"R", _print_rot13},
		{"b", _print_binary},
		{"u", _print_unsigned},
		{"o", _print_octal},
		{"x", _print_hex_l},
		{"X", _print_hex_u},
		{NULL, NULL}
	};
	va_list project;
	int count = 0;

	va_start(project, format);
	count = to_print(format, argument, project);
	va_end(project);
	return (count);
}
