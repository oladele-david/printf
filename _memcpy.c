#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: desc
 * @src: source
 * @n: bytes to write
 *
 * Description: area @src to
 * memory area @dest not overlap.
 *
 * Return: pointer
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;

	char *temp_dest = (char *) dest;
	const char *temp_src = (const char *) src;

	for (i = 0; i < n; i++)
		temp_dest[i] = temp_src[i];
	return (dest);
}
