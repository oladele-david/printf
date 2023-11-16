#include "main.h"

/**
 *_puts-  Printing my long characters c in stdout
 *@str: To print the text
 *
 *Return: success is 1.
 *On error, -1 is printed.
 */

int _puts(const char *str)
{
	int num_printed = 0;

	while (*str)
	{
		num_printed += _putchar(*str);
		str++;
	}

	return (num_printed);
}
