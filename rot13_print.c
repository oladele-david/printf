#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 * Description: a function that return a format of a string
 */
int _printf(const char * const format, ...)
{
	match_convert m[] = {
		{"%s", string_print}, {"%c", char_print},
		{"%%", printf_37},
		{"%i", int_funct}, {"%d", dec_print}, {"%r", reverse_string},
		{"%R", rot13_print}, {"%b", bin_funct}, {"%u", unsigned_printf_fun},
		{"%o", oct_printf}, {"%x", printf_hex_fun}, {"%X", printf_HEX_fun},
		{"%S", string_exe_printf}, {"%p", pointer_printf}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	
	va_end(args);
	return (len);
}
