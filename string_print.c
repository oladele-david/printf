#include "main.h"
/**
 * string_print - print a string.
 * @val: arguments.
 * Return: the distgth of the string.
 */

int string_print(va_list val)
{
	char *s;
	int i, dist;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		dist = _strlen(s);
		for (i = 0; i < dist; i++)
			_putchar(s[i]);
		return (dist);
	}
	else
	{
		dist = _strlen(s);
		for (i = 0; i < dist; i++)
			_putchar(s[i]);
		return (dist);
	}
}
