#include <stdbool.h>
#include "main.h"

/**
 *_itoa - Converts an integer to a string representation in the specified base.
 *
 *@num: The integer to convert to a string.
 *@str: The character array to store the string representation of the integer.
 *@base: The base of the numeral system.
 *
 *Return: The length of the string of the integer, or -1 on error.
 *Description:
 *  The length of the string representation of the integer, or -1 on error.
 */

int _itoa(int num, char *str, int base)
{
	int i = 0;
	bool is_negative = false;

	if (num < 0)
	{
		is_negative = true;
		num *= -1;
	}

	while (num)
	{
		int digit = num % base;

		str[i++] = digit + (digit < 10 ? '0' : 'A');
		num /= base;
	}

	if (is_negative)
	{
		str[i++] = '-';
	}

	str[i] = '\0';
	return (i);
}

