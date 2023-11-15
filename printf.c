#include "main.h"

/**
 * _printf - _printf function
 * @format: format string
 * Return: number of characters printed
 * Description: This is the printf function that prints a string
 */

int _printf(const char *format, ...)
{
	va_list arggs_lists;
	int custom_index = 0;
	int characters = 0;

	if (!format || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}
	va_start(arggs_lists, format);
	while (format && format[custom_index])
	{
		if (format[custom_index] == '%')
		{
			custom_index++;
			if (format[custom_index] == '%')
			{
				_putchar('%');
				characters++;
			}
			else if (format[custom_index])
			{
				int add_characters = handle_format(format[custom_index], arggs_lists);

				characters += add_characters;
			}
			else
			{
				return (characters);
			}
		}
		else
		{
			_putchar(format[custom_index]);
			characters++;
		}
		custom_index++;
	}

	va_end(arggs_lists);
	return (characters);
}
