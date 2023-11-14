#include "main.h"

/**
 * _strlen - the length of a str.
 * @str: The string.
 * Return: Length.
 */
size_t _strlen(const char *str)
{
	size_t len = 0;

	while (*str++)
	{
		len++;
	}

	return (len);
}
