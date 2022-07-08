#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints character to stdout
 * @c: The character to print
 * Return: On success 1 on error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _print_char - writes to stdout
 * @project: The character to print
 * Return: On success 1
 */
int _print_char(va_list project)
{
	_putchar(va_arg(project, int));
	return (1);
}

/**
 * _print_string - prints a string
 * @project: The string
 * Return: 1
 */
int _print_string(va_list project)
{
	int i = 0;
	char *s;

	s = va_arg(project, char *);
	if (!s)
		s = "(null)";
	for (i = 0; s[i]; i++)
		_putchar(s[i]);
	return (i);
}

/**
 * _print_percent - prints a percent
 * @project: the pointer where it would get actions over
 * Return: On success 1
 */
int _print_percent(va_list project __attribute__((unused)))
{
	_putchar('%');
	return (1);
}

/**
 * _print_int - to print an intiger
 * @project: pointer where to take actions over
 * Return: number of the printed digits
 */
int _print_int(va_list project)
{
	int i;
	int count = 0;
	int n = va_arg(project, int);

	if (n < 0)
	{
		count += _putchar('-');
	}
	for (i = 1000000000; i > 0; i /= 10)
	{
		if (n / i)
		{
			if ((n / i) % 10 < 0)
				count += _putchar(-(n / i % 10) + '0');
			else
				count += _putchar((n / i % 10) + '0');
		}
		else if (n / i == 0 && i == 1)
		{
			count += _putchar(n / i % 10 + '0');
		}
	}
	return (count);
}
