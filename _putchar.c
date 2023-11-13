#include <unistd.h>

/**
 * _putchar -  Printing my character c in stdout
 * @c: To print the text
 *
 * Return: success is 1.
 * On error, -1 is printed.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
