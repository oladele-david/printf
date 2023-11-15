#include "main.h"

int handle_char(const format_specifier *spec, va_list args,
				string_buffer *buffer)
{
	int characters_added;
	size_t initial_length;
	char ch = va_arg(args, int);

	initial_length = buffer->length;

	/* handle space padding before the character */
	if (spec->width && !spec->minus_flag)
	{
		handle_width((format_specifier *)spec, buffer, 1);
	}
	append_char(buffer, ch);
	/* handle the space padding after character */
	if (spec->minus_flag)
	{
		handle_width((format_specifier *)spec, buffer, 1);
	}

	characters_added = buffer->length - initial_length;
	return (characters_added);
}

int handle_percent(__attribute__((unused)) const format_specifier *spec,
				   __attribute__((unused)) va_list args, string_buffer *buffer)
{
	append_char(buffer, '%');

	return (1);
}
