#include "main.h"
/**
 * to_print - makes a match to the specifier and returns the number counted
 * @format: it is a string represented always by a character
 * @argument: it specifies the character of the input
 * @project: it is an action pointer for this project
 * Return: the number of the characters printed from the function
 */
int to_print(const char *format, print_type argument[], va_list project)
{
	int i, j;
	int count = 0;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			count += _putchar (format[i]);
			continue;
		}
		for (j = 0; argument[j].print; j++)
		{
			if (*argument[j].print == format[i + 1])
			{
				count += argument[j].p(project);
				break;
			}
		}
		i++;
		if (!argument[j].print)
		{
			count += _putchar('%');
			count += _putchar(format[i]);
		}
	}
	return (count);
}
