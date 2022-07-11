#include "main.h"
/**
 * _printf - function that will replicate what printf function does
 * @format: it is a string that is represented by a character
 * Return: will always return the number of how many characters are printed
 */
int _printf(const char *format, ...)
{
	print_type argument[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"%", _print_percent},
		{"d", _print_int},
		{"i", _print_int},
		{"r", _print_reverse},
		{"R", _print_rot13},
		/*{"b", _print_binary},*/
		{"u", _print_unsigned},
		{"o", _print_octal},
		/*{"x", _print_hex_l},*/
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
/**
 * _create_buffer - function that will create buffer to hold string until will be ready to print
 * Return: pointer to buffer created
 */
char *_create_buffer(void)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (NULL);
	return (buffer);
}
/**
 * _write_buffer - function that prints buffer, frees buffer and va_list
 * @buffer: holding what will be printable
 * @len: measure the length of the string
 * @project: va_list
 * Return: buffering
 */
void _write_buffer(char *buffer, int len, va_list project)
{
	char *buff;

	buff = realloc(buffer, len);
	write(1, buff, len);
	free(buff);
	va_end(list);
}
