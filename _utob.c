#include "main.h"
/**
 * utob - Convert a positive
 * the String
 * @number: The number to convert.
 * @buffer: The string buffer.
 * @base: convert @number to.
 */
void utob(size_t number, char *buffer, int base)
{
	size_t len = 0;

	switch (base) 
	{
		
		case BIN:
		case OCT:
		case DEC:
		case HEX:
			do {
				buffer[len++] = (number % base > 9) ? ('a' + (number  % base - 10)) :
					(number % base + '0');
			} while ((number /= base) > 0);

			buffer[len] = '\0';
			_reverse_str(buffer, len);
			break;
		default:
			break;
	}
}
