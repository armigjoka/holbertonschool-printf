#include "main.h"
/**
 * convert - converts intiger to hexadecimal, octal or binary
 * @number: input
 * @base: the base converted to
 * Return: the converted number at a specified base
 */
char *convert(unsigned int number, int base)
{
	const char model[] = "0123456789ABCDEF";
	static char buffer[50];
	char *pointer;

	pointer = &buffer[49];
	*pointer = '\0';

	while (number != 0)
	{
		*--pointer = model[number % base];
		number /= base;
	}
	return (pointer);
}

/**
 * _print_reverse - prints the string reversed
 * @project: pointer where to get actions over
 * Return: len of string
 */
int _print_reverse(va_list project)
{
	int len = 0;
	int i;
	char *s;

	s = va_arg(project, char *);
	if (!s)
		s = "(null)";
	while (s[len])
		++len;
	i = len - 1;
	while (i >= 0)
		_putchar(s[i--]);
	return (len);
}

/**
 * _print_rot13 - Encode a string on rot13
 * @project: pointer where to get action over
 * Return: number of the strings
 */
int _print_rot13(va_list project)
{
	int i, j;
	char alphabet[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char rot13[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	char *s;

	s = va_arg(project, char *);
	if (!s)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		for (j = 0; alphabet[j]; ++j)
		{
			if (alphabet[j] == s[i])
			{
				_putchar(rot13[j]);
				break;
			}
		}
		if (!alphabet[j])
			_putchar(s[i]);
	}
	return (i);
}

/**
 * _print_unsigned - prints unsigned intiger
 * @project: the pointer where it would get actions over
 * Return: number of digits
 */
int _print_unsigned(va_list project)
{
	int i;
	int count = 0;
	int negative = va_arg(project, int);
	unsigned int n;

	n = negative;
	for (i = 1000000000; i > 0; i /= 10)
	{
		if (n / i)
		{
			if ((n / i) % 10 != 0)
				count += _putchar((n / i % 10) + '0');
		}
		else if (n / i == 0 && i == 1)
		{
			count += _putchar(n / i % 10 + '0');
		}
	}
	return (count);
}

/**
 * _print_octal - to print octal number
 * @project: pointer where to take actions over
 * Return: number of the printed digits
 */
int _print_octal(va_list project)
{
	int i;
	int count = 0;
	unsigned int n;
	char *s;

	n = va_arg(project, unsigned int);
	s = convert(n, 8);

	for (i = 0; s[i]; i++)
	{
		count += _putchar(s[i]);
	}
	return (count);
}
