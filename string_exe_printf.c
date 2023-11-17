#include "main.h"
/**
 * string_exe_printf - print exclusuives string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int string_exe_printf(va_list val)
{
	char *s;
	int i, len = 0;
	int figs;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			figs = s[i];
			if (figs < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + hex_AUX_printf(figs);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
