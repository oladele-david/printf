#include "main.h"

/**
 * _printf - format string tdout
 * @format: format the string
 *
 * Return: character print to stdout,
 * else -1
 */
int _printf(const char *format, ...)
{
	int characters_printed;
	string_buffer buffer;
	va_list args;

	if (format == NULL)
		return (-1); 

	va_start(args, format);

	
	init_string_buffer(&buffer);

	
	characters_printed = custom_printf(&buffer, format, args);

	va_end(args);
	return (characters_printed);
}
