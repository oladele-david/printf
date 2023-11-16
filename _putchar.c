#include "main.h"

/**
 * _putchar -  Printing my character c in stdout
 * @c: To print the text
 *
 * Return: success is 1.
 * On error, -1 is printed.
 */
int _putchar(char x)
{
	return (write(1, &x, 1));
}
