#include "main.h"

/**
 * hex_aux_printf - prints an hexgecimal number.
 * @num: arguments.
 * Return: figs.
 */
int hex_aux_printf(unsigned long int num)
{
	long int i;
	long int *datasets;
	long int figs = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		figs++;
	}
	figs++;
	datasets = malloc(figs * sizeof(long int));

	for (i = 0; i < figs; i++)
	{
		datasets[i] = temp % 16;
		temp /= 16;
	}
	for (i = figs - 1; i >= 0; i--)
	{
		if (datasets[i] > 9)
			datasets[i] = datasets[i] + 39;
		_putchar(datasets[i] + '0');
	}
	free(datasets);
	return (figs);
}
