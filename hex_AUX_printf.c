#include "main.h"

/**
 * hex_AUX_printf - prints an hexgecimal number.
 * @num: number to print.
 * Return: figs.
 */
int hex_AUX_printf(unsigned int num)
{
	int i;
	int *datasets;
	int figs = 0;
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
