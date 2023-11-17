#include "main.h"

/**
 * bin_funct - prints a binary number.
 * @val: arguments.
 * Return: 1.
 */
int bin_funct(va_list val)
{
	int check = 0;
	int abrv = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			check = 1;
		if (check)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			abrv++;
		}
	}
	if (abrv == 0)
	{
		abrv++;
		_putchar('0');
	}
	return (abrv);
}
