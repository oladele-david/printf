#include "main.h"
/**
 * rot13_print - printf str to ROT13 place into buffers
 * @args: type struct va_arg where is allocated printf arguments
 * Return: counters
 *
 */
int rot13_print(va_list args)
{
	int i, j, counters = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char starter[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char mixer[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; starter[j] && !k; j++)
		{
			if (s[i] == starter[j])
			{
				_putchar(mixer[j]);
				counters++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			counters++;
		}
	}
	return (counters);
}
