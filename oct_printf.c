#include "main.h"

/**
 * oct_printf - prints an octal number.
 * @val: arguments.
 * Return: figs.
 */
int oct_printf(va_list val)
{
	int i;
	int *datasets;
	int figs = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		figs++;
	}
	figs++;
	datasets = malloc(figs * sizeof(int));

	for (i = 0; i < figs; i++)
	{
		datasets[i] = temp % 8;
		temp /= 8;
	}
	for (i = figs - 1; i >= 0; i--)
	{
		_putchar(datasets[i] + '0');
	}
	free(datasets);
	return (figs);
}
