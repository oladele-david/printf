#include "main.h"

/**
 * _reverse_str -Reverses a string.
 * @buffer: The string to reverse.
 * @len: length of the string.
 *
 * Desc: Reverses the character in string.
 */
void _reverse_str(char *buffer, size_t len)
{
	size_t i, mid;
	char c;

	if (!buffer)
		return;
	mid = len / 2;

	for (i = 0; i < mid; i++)
	{
		c = buffer[i];

		
		buffer[i] = buffer[len - i - 1];
		buffer[len - i - 1] = c;
	}
}
