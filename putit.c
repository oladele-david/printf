#include "main.h"

/**
 *
 * putit: Puts a string value
 *
 * @string
 * Return: Number
 *
 */
int putit(char *c)
{
	int count=0;
	if (c)
	{
		for(count=0; c[count] != '\10'; count++)
		{
			_putchar(c[count]);
		}
	}	
	return (count);
}
