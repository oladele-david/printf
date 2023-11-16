#include "main.h"

/**
 * _printf - _printf function
 * @format: format string
 * Return: number of characters printed
 * Description: This is the printf function that prints a string
 */

int _printf(const char *format, ...)
{
	va_list args;
	int num_printed = 0;

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
					num_printed += _puts(va_arg(args, char *));
					break;
				case 'd':
					int num = va_arg(args, int);
					char str[100];
					int len = _itoa(num, str, 10);
					num_printed += _puts(str);
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
