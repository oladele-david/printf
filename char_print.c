#include "main.h"

/**
 * char_print - print a char.
 * @val: argument.
 * Return: 1.
 */
int char_print(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
