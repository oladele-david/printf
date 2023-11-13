#include "main.h"
/**
 *
 * Printf: To print formatable text
 *
 * @format: My format specifier
 * Return: no of bytes to be printed
 */
int _printf(const char * format, ...)
{
	unsigned int i, printer = 0;

	va_list data;

	va_start(data, format);

	for(i=0; format[i] != '\0'; i++)
	{
		if(format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if(format[i] == '%' && format[i + 1] == 'c')
		{
			_putchar(va_arg(data, int));
			i++;
		}

		printer += 1;
	}
	va_end(data);
	return(printer);
}
