#include "main.h"
/**
 * Create Format Specifiers Array: Generates an array of structures
 * to manage format string handling functions.
 *
 * Description: This function constructs an array containing all the format
 */

format_specifier *create_format_specifiers(void)
{
	static format_specifier specifiers[] = {
		{'d', 0, 0, 0, 0, 0, 0, 0, 0, handle_decimal},
		{'i', 0, 0, 0, 0, 0, 0, 0, 0, handle_decimal},
		{'c', 0, 0, 0, 0, 0, 0, 0, 0, handle_char},
		{'%', 0, 0, 0, 0, 0, 0, 0, 0, handle_percent},
		{'s', 0, 0, 0, 0, 0, 0, 0, 0, handle_string},
		{'S', 0, 0, 0, 0, 0, 0, 0, 0, handle_custom_string},
		{'r', 0, 0, 0, 0, 0, 0, 0, 0, handle_string_reversal},
		{'R', 0, 0, 0, 0, 0, 0, 0, 0, handle_rot13},
		{'x', 0, 0, 0, 0, 0, 0, 0, 0, handle_hex_lower},
		{'X', 0, 0, 0, 0, 0, 0, 0, 0, handle_hex_upper},
		{'b', 0, 0, 0, 0, 0, 0, 0, 0, handle_binary},
		{'o', 0, 0, 0, 0, 0, 0, 0, 0, handle_octal},
		{'u', 0, 0, 0, 0, 0, 0, 0, 0, handle_unsigned_int},
		{'p', 0, 0, 0, 0, 0, 0, 0, 0, handle_pointer},
	};

	/* calculate the number of specifiers in the array */
	size_t num_specifiers = sizeof(specifiers) / sizeof(specifiers[0]);

	/* allocate memory for the format_specifiers array and copy the content */
	format_specifier *format_specifiers = malloc(
			num_specifiers * sizeof(format_specifier));

	/* verify memory allocation was successful before continuing */
	if (format_specifiers == NULL)
	{
		return (NULL);
	}

	_memcpy(
			format_specifiers, specifiers, num_specifiers * sizeof(format_specifier));

	return (format_specifiers);
