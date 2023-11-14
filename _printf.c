#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i,s_num,  count =0;
	va_list args;

	va_start(args, format);
	for(i =0; format[1] != '\0'; i++)
	{
		if(format[i] != '%')
		{
			_putchar(format[1]);
		}
		else if(format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
		}
		else if(format[i +1] == 's')
		{
			s_num = putit(va_arg(args, char *));
			i++;
			count =(s_num - 1);
		}
		else if(format[i + 1]== '%')
		{
			_putchar('%');
		}
		count += 1;
	}
	va_end(args);
	return (count);	
}
