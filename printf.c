#include "main.h"

/**
 *_printf - _printf function
 *@format: format string
 *Return: number of characters printed
 *
 *Description: This is the printf function that prints a string
 */

int _printf(const char *format, ...)
{
	va_list args;
	int num_printed = 0;
	char buffer[1024];

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			switch (*++format)
			{
				case 'c':
					num_printed += _putchar(va_arg(args, int));
					break;
				case 's':
					strcpy(buffer, va_arg(args, char *));
					buffer[strlen(buffer)] = '\0';
					num_printed += _puts(buffer);
					/* num_printed += _puts(va_arg(args, char *)); */
					break;
				case '%':
					num_printed += _putchar('%');
					break;
				default:
					_putchar('%');
					_putchar(*format);
					break;
			}
		}
		else
		{
			num_printed += _putchar(*format);
		}

		format++;
	}

	va_end(args);
	return (num_printed);
}

