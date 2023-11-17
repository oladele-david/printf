#include "main.h"
/**
 * int_funct - prints integers
 * @args: argument for print
 * Return: figber of characters printed
 */
int int_funct(va_list args)
{
	int n = va_arg(args, int);
	int fig, last = n % 10, digit, expos = 1;
	int  i = 1;

	n = n / 10;
	fig = n;

	if (last < 0)
	{
		_putchar('-');
		fig = -fig;
		n = -n;
		last = -last;
		i++;
	}
	if (fig > 0)
	{
		while (fig / 10 != 0)
		{
			expos = expos * 10;
			fig = fig / 10;
		}
		fig = n;
		while (expos > 0)
		{
			digit = fig / expos;
			_putchar(digit + '0');
			fig = fig - (digit * expos);
			expos = expos / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * dec_print - prints decimal
 * @args: argument to print
 * Return: figber of characters printed
 */

int dec_print(va_list args)
{
	int n = va_arg(args, int);
	int fig, last = n % 10, digit;
	int  i = 1;
	int expos = 1;

	n = n / 10;
	fig = n;

	if (last < 0)
	{
		_putchar('-');
		fig = -fig;
		n = -n;
		last = -last;
		i++;
	}
	if (fig > 0)
	{
		while (fig / 10 != 0)
		{
			expos = expos * 10;
			fig = fig / 10;
		}
		fig = n;
		while (expos > 0)
		{
			digit = fig / expos;
			_putchar(digit + '0');
			fig = fig - (digit * expos);
			expos = expos / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
