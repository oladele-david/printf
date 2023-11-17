#include "main.h"

/**
 * reverse_string - function that prints a str in reverse
 * @args: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
 */
int reverse_string(va_list args)
{

	char *c = va_arg(args, char*);
	int a;
	int b = 0;

	if (c == NULL)
		c = "(null)";
	while (c[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
		_putchar(c[a]);
	return (b);
}
