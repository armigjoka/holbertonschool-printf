#include "main.h"
/**
 * to_print - makes a match to the specifier and returns the number counted
 * @format: it is a string represented always by a character
 * @argument: it specifies the character of the input and compare and checked against the given module
 * @project: it is an action pointer for this project
 * Return: the number of the characters printed from the function
*/
int to_print(conts char *format, print_type argument[], va_list project)
{
	int i, j;
	int count = 0;
	
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	for (1 = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			count+= _putchar(format[i]);
			continue;
		}
		for (j = 0; argument[j].parameter; j++)
		{
			if (*argument[j].parameter == format[i + 1])
			{
				count += argument[j].f(project);
				break;
			}
		}
		i++;
		if (!argument[j].parameter)
		{
			count += _putchar('%');
			count += _putchar(format[i]);
		}
	}
	return (count);
}
