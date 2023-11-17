#include "main.h"

/**
 * printf_HEX_fun - prints an hexgecimal number.
 * @val: arguments.
 * Return: figs.
 */
int printf_HEX_fun(va_list val)
{
	int i;
	int *datasets;
	int figs = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		figs++;
	}
	figs++;
	datasets = malloc(figs * sizeof(int));

	for (i = 0; i < figs; i++)
	{
		datasets[i] = temp % 16;
		temp /= 16;
	}
	for (i = figs - 1; i >= 0; i--)
	{
		if (datasets[i] > 9)
			datasets[i] = datasets[i] + 7;
		_putchar(datasets[i] + '0');
	}
	free(datasets);
	return (figs);
}
