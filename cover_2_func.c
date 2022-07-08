#include "main.h"
/**
 * _print_binary - prints binary from intiger
 * @project: pointer to get action over
 * Return: the binary number
 */
char _print_binary(va_list project)
{
	int i;
	unsigned int n;
	char *s;
	int count = 0;

	n = va_arg(project, unsigned int);
	s = convert(n, 2);

	if (!n)
		count += _putchar('0');
	for (i = 0; s[i] && n; i++)
		count += _putchar(s[i]);
	return (count);
}

/**
 * _print_hex_u - prints the hexadecimal unsigned
 * @project: pointer where to get actions over
 * Return: number of count
 */
int _print_hex_u(va_list project)
{
	unsigned int n;
	int i;
	char *s;
	int count = 0;

	n = va_arg(project, unsigned int);
	s = convert(n, 16);

	if (!n)
		count += _putchar('0');
	for (i = 0; s[i] && n; i++)
		count += _putchar(s[i]);
	return (count);
}
